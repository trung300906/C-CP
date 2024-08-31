#include  <iostream>
using namespace std;

int main(){
    int n,run;
    run = 0;
    cout << "nhập số phần tử: " ; cin  >> n;
    int so[n];
    for (int i=0; i < n; i++){
        cin >> so[i];
        if (so[i] < 0){
            run++;
        }
    }
    cout << "----------------------------" << endl;
    cout << "số các số âm của mảng là: " << run << endl;
    for (int i=0; i < n; i++){
        if (so[i] < 0){
            for (int j=i; j < n-1; j++){
                so[j]= so[j+1];
            }
            n--;
            i--;
        }
    }
    cout << "số phần tử trong mảng là : " << n << endl; 
    cout << "==============================" << endl;
    for (int i=0; i < n; i++){
        cout << so[i] << " ";
    }
}