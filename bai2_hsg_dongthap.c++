#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, l;
    cin >>  n >> p >> l;
    vector<pair<double, double>> store(n+2, {0,0});
    for (int i = 1 ; i<=n; i++){
        cin  >> store[i].first >> store[i].second;
    }
    vector<double> dp(n+2);
    for(int i = 1; i <= n; i++){
        dp[i] = LONG_LONG_MAX;
        double sumw = 0, vmin = LONG_LONG_MAX;
        for(int j =  i; j >0; j--){
            sumw += store[j].first;
            vmin = min(vmin , store[j].second);
            if(sumw > p) break;
            double k = l/vmin;
            dp[i] = min(dp[i], dp[j-1] + k);
            cout << dp[i] << endl;
        }

    }
    cout << setprecision(2) << fixed << dp[n] << endl;
}