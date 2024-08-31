#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int s = 1;
    int dem =0;
    while(s<=n){
        if(s+x > n){
            s+=1;
            dem++;
            continue;
        }
        s+=x;
        dem++;
    }
    cout << dem;
}