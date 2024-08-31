#include <iostream>
#include <math.h>
using namespace std;

int giaipt(float a, float b, float c, float x1, float x2){
    float delta = pow(b,2)- (4*a*c);
    if (delta <0){
        x1=x2=0.0;
        return 2;
    } else if (delta == 0){
        x1=x2=(-b)/(2*a);
        return 1;
    } else{
        x1=(-b + sqrt(delta))/(2*a);
        x2=(-b - sqrt(delta))/(2*a);
        return 0;
    }
}
int main(){
    float a,b,c,x1,x2,delta;
    do{
        cout <<"a:"; cin >> a;
        cout <<"b:"; cin >> b;
        cout <<"c:"; cin >> c;
    } while (!a);
    int number=giaipt(a,b,c,x1,x2);
    if (number==2){
        cout <<"pt vo nghiem  :) ";
    } else if (number==1){
        cout <<"pt co nghiem kep \n %.4f" << x1;
    } else {
        cout <<"pt co 2 nghiem pb \t" << round(x1) << "\n" << round(x2) <<endl;
    }
    return 0;
}