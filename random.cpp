#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
#if 0
    srand(time(0));
    int a = rand();
    cout << "\n a \t" << a ;
#endif

srand(time(0));
int a = rand() % 1 + 2;
int in;
    do {
        cin >> in;
        if (in > a){
        cout <<"cao hơn r: \n" ;
        } else if(in <a) {
        cout <<"thấp hơn r: \n" ;
        } else {
            cout <<"chúc mừng";
        }
    } while ( in != a );
}