#include <bits/stdc++.h>
using namespace std;

int main(){
    #if 0 // fibornacchi
        int n;
        vector<long long> dp;
        dp.push_back(1);
        dp.push_back(1);
        for(int i = 2; i<=n ; i++){
            dp.push_back(dp[i-1] + dp[i-2]);
        }
        cout << dp[n-1];
    #endif
    #if 0
    {
        int n = 5;
        srand(time(0));
        vector<int> s(n);
        for(auto &i: s){
            cin >> i;
        }
        vector<int> dp(n, 1);
        for(int i = 1 ; i < n; i++){
            if(s[i] > s[i-1]){
                dp[i] = dp[i-1]+1;
            } else {
                for(int j = i; j >=0; j--){
                    if(s[i] > s[j]){
                        dp[i] = dp[j]+1;
                        break;
                    }
                }
            }
        }
        cout << "độ dài của dãy con dài nhất là: " << *max_element(dp.begin(), dp.end()) << endl;
    }
    #endif
    #if 1
    
    #endif
}