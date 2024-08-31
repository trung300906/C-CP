#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 12345;
    int c;
    while(n>1){
        c=n%10;
        cout << c << endl;
        n/=10;
        cout << n << endl;
    }
}