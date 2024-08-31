#include <bits/stdc++.h>
using namespace std;

// hàm sort khai trong thư viện STL của std, #incldue<algorithm>(đã bao gồm trong #include <bits/stdc++.h>)
// hàm so sánh, đảo số trong các phần tử trong thuật toán insertion sort
bool comp(const int a, const int b){
   return a > b;
}

//check số nguyên tố
int checksontlonnhat( int &k)
{
    if (k < 2){
         return false;
    } else if(k>=2){
        float can =  sqrt(k);
        for (int i = 2; i <= can; i++){
            if (k % i == 0){
                return false;
            }
        }
    }
    return true;
}

//check số lớn thứ 2
int checksolonthu2(int a[], int &n){
    for (int i = 0; i < n; i++){
        if (a[i] > a[i+1]){
        cout <<"so lon thu 2 la: " << a[i+1] << " " << endl;
        break;
        }
    }
    return true;
}

int main(){
    int n,i;
    cout << "nhap so lương phan tu: ";
    cin >> n;
    int inputa[n];
    srand(time(NULL)); // random theo thư viện thời gian
    for(int i = 0; i < n; i++){
        inputa[i] = rand();
    }
    sort(inputa, inputa + n, comp); //hàm sắp xếp giảm
    cout << "-------------------------------" << endl;
    // check số lớn thứ 2
    if (checksolonthu2(inputa, n) == true){} 
    // if rỗng để gọi hàm rồi in ra, và loại giá trị 1 của true để tránh in ra 1 ;-;

    cout << "-------------------------------" << endl;
    // check số nguyên tố lớn nhất
    for (int i = 0; i < n; i++){
        if (checksontlonnhat(inputa[i]) == true){
            if (inputa[i] > inputa[i+1]){
                cout << "so nguyen to lon nhat la " << inputa[i] << " " << endl;
                break; // gặp số đầu là bay khỏi vòng lặp, kết thúc chương trình
            }
        }   
    }
}