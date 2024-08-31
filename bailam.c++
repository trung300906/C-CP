#include  <iostream>
#include <algorithm>
using namespace std;

void logic(int a[], int n, int k){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout << a[i] << endl;
    }
    int socuoi = a[n-1];
    #if 1
    for(int i=0;i<n;i++){
        if(k>a[i] && k<a[i+1]){
            for(int j=n-1;j>i;j--){
                a[j]=a[j-1];
            }
            a[i+1]=k;
            n++;
            a[n-1] = socuoi;
            break;
        }
    #endif
    #if 0
    for(int i=n-1;i>=0;i--){
        if(k>a[i-1]){
            for(int j=n-1;j>i;j--){
                a[j]=a[j-1];
            }
            a[i]=k;
            n++;
            a[n-1] = socuoi;
            break;
        }
    #endif
        if (k>a[n-1]){
            n++;
            a[n-1] = k;
        }
        if(k<a[0]){
            for(int j=n-1;j>0;j--){
                a[j]=a[j-1];
            }
            n++;
            a[0]=k;
            a[n-1] = socuoi;
            break;
        }
    }
    cout <<"mảng sau khi chèn số là: " << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << endl;
    }
}

int main(){
    int n,k;
    srand(time(NULL));
    cin>>n;
    cout <<"nhập số nguyên cần chèn: "; cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand() % 100 +1;
    }
    cout <<"mảng sau khi sắp xếp tăng là: ";
    logic(arr,n,k);
}