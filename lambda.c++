#include<bits/stdc++.h>
#include <functional>
using namespace std;
int main(){
    /* auto sigma = [](int a, int b){ return a+b;};
    cout << sigma(10,11);
    int x= 10;
    auto checkchanle = [](int x){
        if(x%2 == 0){ cout << "true";} else cout << "false";
    };
    checkchanle(x);

    int a=10, b=21;
    auto max = [](int &a, int &b){
        return a>b?true:false;
    };
    if(max(a,b)) cout << "max là: " << a; else cout << "max là: " << b;

    cout << endl;
    function<int(int)> giaithua = [](int x) {
        static function<int(int)> giaithua = [](int x) {
            return x < 2 ? 1 : x * giaithua(x - 1);
        };
        return giaithua(x);
    };// dùng stactic để chỉ tạo 1 và chỉ 1 bản sao, để tránh tràn bộ nhớ không cần thiết
    cout << "giai thừa của " << x << " là: " << giaithua(x); */
    int x = 10;
    auto add_x =  [x](int y) mutable ->int {
        if(y< 0){
            
            throw invalid_argument("y must be non-negative");
        }
        x+=y;
        return x;
    };
    try{
        cout << add_x(5);
        cout << endl << add_x(-5);
    } catch(invalid_argument &e){
        cerr << e.what() << endl << endl;
    };
}