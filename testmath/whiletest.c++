#include<iostream>
using namespace std;
int main(){
    int n=0;
    while(n!=10+1){
        cout << n << endl;
        n++;
    }
    n=0;
    cout << endl;
    do{
        cout << n << endl;
        n++;
    } while(n!=10);
}