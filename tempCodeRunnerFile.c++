#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    srand(time(0));
    vector<pair<int, bool>> store;
    freopen("HN3.INP", "r",stdin);
    freopen("HN3.OUT", "w",stdout);
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        pair<int, bool> temp;
        /* cin >> temp.first; */
        temp.first = rand()% 10;
        cout << temp.first <<" ";
        temp.second  = false;
        store.push_back(temp);
    }
    cout << endl;
    // settings cơ bản
    int s = accumulate(store.begin(), store.end(), 0, [](int sum, const pair<int, bool>& p) {
        return sum + p.first;
    });
    // Tìm giá trị lớn nhất và vị trí của nó
    auto maxit = max_element(store.begin(), store.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });
    int maxval = maxit->first;
    store[distance(store.begin(), maxit)].second = true;
    vector<int> ans; // max trên đây là ans
    int y, s_temp;
    for(int i = 0 ; i < n ; i++){
        if(!store[i].second) y = s - 2*(maxval + store[i].first); else continue;
        if(y >=0){ 
            store[i].second = true;
            store[distance(store.begin(), maxit)].second = true;
            for(int j = 0 ; j < store.size() ; j++){
                if(store[j].first == y){
                    store[j].second = true;
                    break;
                } 
            }
            if(s_temp = [&store](int sum = 0){
                for(int j = 0 ; j < store.size() ; j++){
                    if(store[j].second  == false) sum += store[j].first;
                }  
                return sum;
            }() == (maxval + store[i].first)){
                if(!ans.empty()){
                    if( y <= ans.back()) ans.push_back(maxval + store[i].first);
                } else ans.push_back(maxval+ store[i].first);
            }
            for(auto &j :store) j.second = false;
            store[distance(store.begin(), maxit)].second = true;
        }
    }
    if(!ans.empty()){
        cout <<"số tiền lớn nhất là: " << *max_element(ans.begin(), ans.end()) << endl;
    } else cout << 0 << endl;
    return 0;
}