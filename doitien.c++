#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[] = {1,7,10};
    int size = sizeof(a)/sizeof(a[0]);
    int k = size-1;
    int z = 0, dem = 0;
    int demengia = 0;
    while(z<n){
        z+=a[k];
        if(z > n){
            z-=a[k];
            k--;
            cout << demengia << "lần " << endl;
            demengia = 0;
            if(k < 0){
                k=0;
            }
            continue;
        }
        if(demengia == 0){
            cout << "bóc " << a[k] << " 12:";
            demengia++;
        }
        dem++;
    }
    cout << "số lần bóc: " << dem << endl;
}
