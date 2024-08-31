#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a(50);
    cout << static_cast<char>(a) << endl;

    char kb/* { 'a' } */;
    cin >> kb;
    cout << static_cast<int>(kb) << endl;

}
