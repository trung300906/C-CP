#include<iostream>
#include <math.h>
using namespace std;
// O(2^n)
void Tower(int n , char a, char b, char c){
    if(n==1){
        cout<<"\t"<<a<<"------->"<<c<<endl;
        return;
    }
    Tower(n-1,a,c,b);
    Tower(1,a,b,c);
    Tower(n-1,b,a,c);
}
int main(){
    char a='A', b='B', c='C';
    int n;
    cout<<"Nhap so dia: ";
    cin>>n;
    cout << "số bước đi tối thiểu là: " << pow(2,n) - 1 << endl;
    Tower(n,a,b,c);
}