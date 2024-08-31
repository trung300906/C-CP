#include <bits/stdc++.h>
using namespace std;

int dem = 0;
int S;
auto check(vector<int> result) {
    return result[0] != result[1] && result[1] != result[2] && result[2] != result[0];
}
void tohop(const vector<int>& store, vector<int>& result, int location, int n, int bac) {
    S=0;
    if (bac == 0) {
        if(check(result)){
            for (int i = 0; i < result.size(); ++i) {
                if(i == 1){ 
                    S-= result[i];
                    continue;
                }
                S+= result[i];
            }
            if(S == 0) dem++;
            
        }
        return;
    }

    for (int i = 0; i < n; ++i) {
        result.push_back(store[i]);
        tohop(store, result, i, n,bac - 1);
        result.pop_back();
    }
}

void tohopall(const vector<int>& store, int bac) {
    int n = store.size();
    vector<int> result;
    tohop(store, result, 0, n, bac);
}
int main(){;
    freopen("bai1_hsg_dongthao.INP", "r", stdin);
    freopen("bai1_hsg_dongthao.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> store(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> store[i];
    }
    int bac = 3;
    tohopall(store, bac);
    cout << dem;
}