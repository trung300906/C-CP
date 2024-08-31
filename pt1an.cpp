#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,x;
    cin >> a >> b;
    if (a == 0) {
        cout <<"pt vo nghiem";
    } else if ( a== 0 && b == 0) {
        cout <<"pt vo so nghiem";
    } else {
        x = (-b)/a;
        cout << "S =" << x << endl;
    }
    return 0;
}
