#include <bits/stdc++.h>
using namespace std;

// prim algorithm
struct edge{
    int n1,n2,l;
};
auto check(vector<bool> bolcheck){ // dùng để check true false trên mảng duyệt cạnh, nếu tất cả các cạnh đều đã xét thì trả về true
    auto it = find(bolcheck.begin(), bolcheck.end(), false);
    if(it!= bolcheck.end()) return false;
    return true;
}
int main(){
    int ntram, nw, pd;
    cin >> ntram >> nw >> pd;
    vector<edge> st(nw); // chứa ma trận canh
    vector<int> tramgoc(pd); // chứa các trạm gốc
    vector<bool> bolcheck(ntram, false); // chứa và kiểm tra xem các đỉnh đã xét chưa bằng true false
    for(auto &i:tramgoc){
        cin >> i;
        i--;
    } 
    for(auto &i: st){
        cin >> i.n1>> i.n2 >> i.l;
        i.n1--;
        i.n2--;
    }
    int run = tramgoc.front();
    bolcheck[run] = true;
    sort(st.begin(), st.end(), [](const edge &a, const edge &b){
        return a.n1 < b.n1;
    });// sắp xếp lại các đỉnh theo thứ tự tăng dân(follow n1)
    vector<pair<int, int>> ltemp; // first là giá trị của n2; second là giá trị l;
    int ans = 0;
    while(!check(bolcheck)){
        for(auto &i : st){
            if(bolcheck[i.n1]){
                pair<int, int> temp;
                temp.first = i.n2;
                temp.second = i.l;
                ltemp.push_back(temp);
                continue;
            }
            if(bolcheck[i.n2]){
                pair<int, int> temp;
                temp.first = i.n1;
                temp.second = i.l;
                ltemp.push_back(temp);
                continue;
            }
        }
        auto minit = min_element(ltemp.begin(), ltemp.end(), [](const auto& a, const auto& b){
            return a.second < b.second;
        });
        for(auto it = st.begin(); it != st.end(); it++){
            if(it -> l == minit -> second && ((minit -> first == it -> n2)||(minit -> first == it -> n1)) && bolcheck[it -> n1] == true){
                it = st.erase(it);
                break;
            }
        }
        ans += minit -> second;
        bolcheck[minit -> first] = true;
        ltemp.clear();
        ltemp.shrink_to_fit();
    }
}
