#include <iostream>

using namespace std;

int main(){
    int month;
    cout <<" nhap thang: ";
    cin >> month;
    switch (month)
        {
        case 1 :
            cout << "Januari";
            break;
        case 2 :
            cout << "Februari";
            break;
        case 3 :
            cout << "Maret";
            break;
        case 4 :
            cout << "April";
            break;
        case 5 :
            cout << "Mei";
            break;
        case 6 :
            cout << "June";
            break;
        case 7 :
            cout << "Juli";
            break;
        case 8 :
            cout << "Agustus";
            break;
        case 9 :
            cout << "September";
            break;
        case 10 :
            cout << "October";
            break;
        case 11 :
            cout << "November";
            break;
        case 12 :
            cout << "Desember";
            break;
        default :
            cout <<"error" << endl;
            break;
        }
}