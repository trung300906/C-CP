#include <bits/stdc++.h>
using namespace std;

int dem =0;
auto combination(vector<int> s, int k, int max){
    int i = 0 ; 
    int run = i+k;
    vector<int> combination;
    while(i <= s.size() - k){
        for(int z = i; z < run; z++){
            combination.push_back(s[z]);
        }
        if(combination[k-1] == max){
            dem++;
        }
        if(run == s.size()){
            i++;
            run = i+k;
            combination.clear();
            continue;
        }
        run++;
        combination.clear();
    }
    return dem;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    for(auto &i : s){
        cin >> i;
    }
    cout << combination(s, k, *max_element(s.begin(), s.end()));
}