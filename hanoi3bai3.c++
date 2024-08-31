#include <bits/stdc++.h>
using namespace std;

int dai, rong, k, d;
vector<vector<char>> mapp;
vector<pair<int,int>> sthi; // first là cho dài, còn second là cho rộng
map<pair<int,int>, int> dancu;
auto duyet(int dai, int rong){
    if(rong-d <= 0){
        for(int i = 0 ; i <= rong+d; i++){
            auto it = dancu.find({dai,i});
            if(it != dancu.end()) it -> second ++;
        }
        return dancu;
    }
    if(rong + d >= mapp[dai].size()){
        for(int i = mapp[dai].size()-1; i>= rong-d ; i++){
            auto it = dancu.find({dai,i});
            if(it != dancu.end()) it -> second ++;    
        }
        return dancu;
    }
    for(int i =  rong -d; i<= rong+d; i++){
        auto it = dancu.find({dai,i});
        if(it != dancu.end()) it -> second ++;
    }
    return dancu;
}
int main(){
    cin >> dai >> rong >> k >> d;
    for(int  i = 0 ; i < dai; i++){
        vector<char> temp;
        for(int j = 0 ; j < rong; j++){
            char x;
            cin >> x;
            temp.push_back(x);   
            if(temp.back() == 'P') dancu[{i,j}] = 0;
            if(temp.back() == 'M') sthi.push_back({i,j});
        }
        mapp.push_back(temp);
    }
    for(auto &i : sthi){
        for(int j = 0 ; j <= d; j++){
            if(j == 0){
                duyet(i.first, i.second);
                continue;
            }
            if(i.first - j <= 0){
                duyet(0, i.second);
                duyet(i.first + j, i.second);
                continue;
            }
            if(i.first + j >= mapp.size()){
                duyet(mapp.size()-1, i.second);
                duyet(i.first -j, i.second);
                continue;
            }
            duyet(i.first + j, i.second);
            duyet(i.first - j, i.second);
        }
    }
}