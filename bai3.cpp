//tìm số nguyên tố,số hoàn thiện trong mảng, chạy random
#include <bits/stdc++.h> //thư viện cục bộ
using namespace std;
//hàm check số nguyên tố
int checksonguyento(int &n){
    if (n < 2){
         return false;
    } else {
        float can =  sqrt(n);
        for (int i = 2; i <= can; i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}
//hàm check số hoàn thiện
int checksohoanthien(int &n){
    int tong=0;
    int dem = 0;
    for (int i = 1; i < (n); i++){
        if (n % i == 0){
        tong += i;
        }
    }
    if (tong == n){
        cout << "sht "<< n << endl;
    }
    return true;
}

int main(){
    const int n = 500000;
    int dem;
    cout <<"nhap so phan tu n: ";
    /* cin >> n; */
    int inputnumber[n];
    srand(time(NULL));
    //random số :D
    for (int i = 0; i < n; i++){
       inputnumber[i] = rand() ; //random từ 1 tới 200
    }
    // thuật toán gọi hàm check số nguyên tố
    for (int i = 0; i < n; i++){
        if ((checksonguyento(inputnumber[i])) == true){
            cout <<"snt la" << inputnumber[i] << endl;
            dem++;
        }
    }
    cout <<"so luong so nguyen to la " << dem << endl;

    // thuật gọi hàm check số hoàn thiện
    for (int i = 0; i < n; i++){
        checksohoanthien(inputnumber[i]);
    }
    return 0;
}