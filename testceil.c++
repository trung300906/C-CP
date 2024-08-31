#include <bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cin >> n;
    if (ceil(n) == floor(n)){
        cout << "n là số nguyên";
    } else {
        cout << "n ko là số nguyên ";
    }
}