/* #include <iostream>
#include <cstdlib>
#include <ctime>
*/
#include <unistd.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int bienmang[15]/* = {2,3,5,6,7,8,-11} */;
    int tong = 0;
    srand(time(NULL)); //hàm time cần có thư viện ctime
    for (int i=0; i<=15;i++) {
        bienmang[i] = rand() % 900;
        tong += bienmang[i];
    }
    cout<< "tong la \t" << tong << "\n";
    sleep(0.9); // cần có thư viện unistd.h
}