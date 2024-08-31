#include <bits/stdc++.h>
using namespace std;

bool snt(int n){
    if(n == 1 || n == 0) return false;
    for(int i = 2;  i<= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int a, b;
    cin  >> a >> b;
    int s1 = floor(sqrt(a));
    int s2 = floor(sqrt(b));
    int dem = 0;
    for(int i = s1; i <= s2; i++){
        if(snt(i)) dem++;
    }
    cout << dem << endl;
}