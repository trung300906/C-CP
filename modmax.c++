#include <bits/stdc++.h>
using namespace std;

long long process(vector<long long> s){
    long long n = s.size();
    if(s[n-1]!= s[0]){
        long long maxdiff = s[n-1] - s[0];
        for(long long i = 1; i < n; i++){
            maxdiff = __gcd(maxdiff, s[i]- s[n-1]);
        }
        return maxdiff;
    } else {
        return 1;
    }
}
int main(){
    long long n;
    cin >> n;
    vector<long long> s(n);
    for(auto &i : s){
        cin >> i;
    }
    cout << process(s);
}