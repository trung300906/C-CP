#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 0, INT_MAX};
    auto min = min_element(a.begin(),  a.end(), [](int a, int b){
        if(a == 0) return false; // loại trừ số 0
        if(b == 0) return true;  // loại trừ số 0
        return a < b;
    });
    cout << *min;
}