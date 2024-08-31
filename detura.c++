#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(NULL));
    // trục khai báo
    int n;
    int k=0;
    int run=0;
    int dem=1;
    cout << "nhập số lượng phần tử: "; cin >> n;
    int store[n];
    int storeso[n];
    int array[n];
    //kết thúc trục khai báo
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, array + n);
    for (int i=0;i < n;i++){
        if (array[i] == array[i+1]){
            continue;
        } else {
            storeso[k]=array[i];
            k++;
        }
    }
    k=0;
    for (int i=k;i < n;i++){
        if (array[i] == array[i+1]){
            dem++;
        } else {
            store[run]=dem;
            run++;
            dem=1;
            k=i;
            continue;
        }
    }
    for (int i=0;i<run;i++){
        cout << "số " << storeso[i] << "lặp " << store[i] <<" lần " << endl;
    }
}