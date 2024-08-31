#include <bits/stdc++.h>
using namespace std;
#define MAX 100
// nên dùng các dạng i-1 thay vì i+1 để tránh trường hợp vượt ngoài phạm vi mảng
int main(){
    int ar1d[MAX] = {5,4,8,7,6,9,10};
    int value=sizeof(ar1d)/sizeof(ar1d[0]);
    int max = 0;
    int dem = 0;
    int ldd = 0;
    int ip;
    for (ldd;ldd < value; ldd++){
        if(ar1d[ldd] < ar1d[ldd+1]){
            dem++;
        } 
        if (ar1d[ldd] > ar1d[ldd+1]){
            if (max <= dem){
                max = dem;
            }
            ip = ldd;
            dem=0;
            ldd++;
        }
    }
    for ( int i = ip - max; i<=ip;i++){
        cout << ar1d[i] << "\t ";
    }
}