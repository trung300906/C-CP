#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,d,e,f,g,h,dtb;
        do
        {
            cout <<"nhập điểm cac mon:\t";
            cin >>a >>b >>c >>d >>e >>f >>g >>h;
            if (a <10 && b <10 && c <10 && d <10 && e <10 && f <10 && g <10 && h < 10){
                #if 1
                dtb = float(((a+b+c+d+e+f+g+h)/8));
                cout << "dtb cua ban la:" << dtb << endl;
                if (dtb<=10 && dtb>=9){
                    cout << "xs \t";
                } else if (dtb<9 && dtb>=8)
                {
                    cout <<"hsg \t";
                } else if (dtb<8 && dtb>=6.5)
                {
                    cout << "hsk \t";
                } else if (dtb<6.5 && dtb>=3)
                {
                    cout <<"hstb \t";
                } else if (dtb<3){
                    cout <<"rớt \t";
                };    
                #endif  
                break;
            } else cout << "ERROR";
        } while ( a>10 && b>10 && c>10 && d>10 && e>10 && f>10 && g>10 && h>10);
    return 0;
    system("pause");
}

