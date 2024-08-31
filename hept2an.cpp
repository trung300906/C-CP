/* #include <iostream>
#include <math.h> */
#include<bits/stdc++.h>
using namespace std;

// dùng phương pháp tìm bcnn +  cộng đại số
int giaipt2an(float a1, float a2, float b1, float b2, float c1, float c2, float &x, float &y){
    if ((a1/a2 == b1/b2) == c1/c2){
        cout << " pt vo so nghiem";
        return 2;
    } else if ((a1/a2 == b1/b2) && (b1/b2 != c1/c2)){
        cout << "pt vo nghiem";
        return 0;
    } else {
        //pt thu nhat
        float a12 = a1*a2;
        float b12 = b1*a2;
        float c12 = c1*a2;
        // pt thu hai
        float a22 = a12;
        float b22 = b2*a1;
        float c22 = c2*a1;
        //buoc tinh toan
        float hieub = b12 - b22;
        float hieuc = c12 -c22;
        y = hieuc / hieub;
        x = (c12 - b12*y)/a12;
        cout <<"pt co nghiem x= %.4f" << x << "\t y= %.4f" << y << endl;
    } 
    return 3;
}
int main(){
    float a1, a2, b1, b2, c1, c2;
    float x, y;
    cout <<"pt thu nhat la:"; cin >> a1 >> b1 >> c1; cout << " \n" << a1 << "x + " << b1 << "y=" << c1 << endl;
    cout <<"pt thu hai la:"; cin >> a2 >> b2 >> c2; cout << " \n" << a2 << "x + " << b2 << "y=" << c2 << endl;
    /* cout << giaipt2an(a1, a2, b1, b2, c1, c2, x, y) << endl; */
    if (giaipt2an(a1, a2, b1, b2, c1, c2, x, y) ==  true){
        cout <<" success";
    };
    return 0;
}