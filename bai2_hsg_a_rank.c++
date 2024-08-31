#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<pair<int,int>> time(n);
    for(int i = 0 ; i  < n; i++){
        cout << "giờ bắt đầu: "; cin >> time[i].first;
        cout << "giờ kết thúc: "; cin >> time[i].second;
    }
    cout << endl;
    for(int i = 0 ; i  < n; i++){
        cout <<"giờ bắt đầu: " << time[i].first; 
        cout <<" giờ kết thúc: " << time[i].second;
        cout << endl;
    }
    int dem = 0;
    int timemaxbegin = 0, timemaxend =  INT_MAX;
    for(int i = 0 ; i <  n; i++){
        if(i == 0){
            dem++;
            timemaxbegin =  time[i].first;
            timemaxend = time[i].second;
        }
        if(i > 0 && i < n){
            if(time[i].first >= time[i-1].second){
                timemaxbegin =  time[i].first;
                timemaxend = time[i].second;
                continue;
            }
            if(time[i].first < time[i-1].second) {
                dem++;
                timemaxbegin = max(timemaxbegin, time[i].first);
                timemaxend = min(timemaxend, time[i].second);
            }
        }
    }
    cout << endl << "số nhân viên cần: " << dem << endl;
    cout <<  "thời gian thuê nhiều nhất là: " << timemaxbegin <<" " << timemaxend;
}