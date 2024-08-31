#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;;
    int dem =0;
    vector<vector<int>> store(n+1, vector<int>(n+1));
    for(int i = 1; i <= n; i ++){
        for(int j =1; j<= n; j++){
            store[i][j] = (i)*(j);
            /* cout << store[i][j] << endl;
            system("pause"); */
            if(store[i][j] == x) dem++;
        }
    }
    cout << dem;
    cout << endl << "Max size of std::vector: " << store.max_size()<< std::endl;
}