#include <iostream>
#include <math.h>
using namespace std;

bool check(int &n){
    int t;
    int c;
    while (n > 10){
        t = n % 10;
        n /= 10;
    } if ( t %2 == 0) {
        return true;
    } else if (t  %2 == 1) {
        return false;
    }
    return 0;
}
int main(){
    int  n;
    cin >> n;
    for (int i = 0; i < n; i++){
        if (check(n) ==  true){
            cout <<"yes";
            } else {
            cout <<"false" << endl;
        }
    }
    return 0;
}
