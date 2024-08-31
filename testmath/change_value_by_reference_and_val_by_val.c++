#include <iostream>
using namespace std;

void changeValueByValue(int x) {
    x = 10;
}

void changeValueByReference(int &x) {
    x = 10;
}

int main() {
    int a = 5;
    cout << "Before changeValueByValue: " << a << endl;
    changeValueByValue(a);
    cout << "After changeValueByValue: " << a << endl;

    int b = 5;
    cout << "Before changeValueByReference: " << b << endl;
    changeValueByReference(b);
    cout << "After changeValueByReference: " << b << endl;

    return 0;
}