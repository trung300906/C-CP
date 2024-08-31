#include  <iostream>
using namespace std;

int checkso(int i){
    int run;
    if (i >= 0){
        return false;
    }
    return true;
}

int xoamang(int i){
    if ( i < 0){
        return false;
    }
    return true;
}
int main(){
    int n,run;
    cout << "nhập số phần tử: " ; cin  >> n;
    int so[n];
    int soduong[n];
    for (int i=0; i < n; i++){
        cin >> so[i];
        if (checkso(so[i]) ==  true){
            run++;
        }
    }
    cout << "----------------------------" << endl;
    cout << "số các số âm của mảng là: " << run << endl;
    run = 0;
    for (int i = 0; i < n; i++) {
        if (checkso(so[i]) == false){
            soduong[run]=so[i];
            run++;
        }
    }
    if (run == 0){
        cout << "không có số dương nào";
        goto exit;
    }
    cout << "+++++++++++++++++++++++++++++" << endl;
    cout << "các số dương trong mảng là: " << endl;
    for (int i = 0; i < run; i++) {
        cout << soduong[i] << endl;
    }
    exit:
    return 0;
}