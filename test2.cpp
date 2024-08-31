#include <bits/stdc++.h>
using namespace std;

bool comp(const int a, const int b){
   return a > b;
}

int main(){
    int n;
    cin >> n;
    int k[n];
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        k[i] = rand();
        cout << k[i] << " " << endl;
        
    }
    sort(k, k + n, comp);
    cout << "-------------------------" << endl;
    for(int i = 0; i < n; i++){
        cout << k[i + 1];
        break;
    }
    return 0;   
}