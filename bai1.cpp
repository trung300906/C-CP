#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,vt;
    int i;
    /* int dem = 0; */
    cout <<"nhap n" << endl;
    cin >> n;
    #if 1
    if ( n == 1 || n == 0 ){
        cout <<"day ko la snt";
    } else {
    for (int i = 2; i <= round((sqrt(n)))+1; i++){
        if (n % i == 0){
            cout <<"day ko la snt" <<  endl;
            goto label;
        }
    }
    if ( i > round((sqrt(n)))){
        cout <<" \n day la snt" << endl;
        }
    }
    label:
    /* if (dem >= 2){
        cout <<"\n n ko phai la so nguyen to";
    } else cout <<"n la snt"; */
    #endif
    return 0;
}