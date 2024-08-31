#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int x = rand() % 100 + 1;
    int k = 3*x+1;
    while(1){
        while(k%2==0){
            k /= 2;
            cout <<"giá trị sau chia 2 là: " << k << endl;
        }
        x= k;
        k = 3*x+1;
        cout << " giá trị của biểu thức là: " << k << endl;
        cout <<" ------------------------------" << endl;
        _sleep(1000);
    }
}