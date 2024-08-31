#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,x,dem;
    cout <<"hello world" <<endl;
    int tong = 0;
    cin >> n;
    for (int i = 1; i < (n); i++){
        if (n % i == 0){
        tong += i;
        }
    }
    cout << "tong la:" << tong << endl;
        if (tong == n){
            cout << "n la so hoan hao" << endl;
        } else cout <<"n ko la so hoan hao" << endl;
    cout << "finish";
    return 0;
}