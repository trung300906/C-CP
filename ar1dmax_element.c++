#include <bits/stdc++.h>
using namespace std;
// nên dùng các dạng i-1 thay vì i+1 để tránh trường hợp vượt ngoài phạm vi mảng
int main(){
    srand(time(NULL));
    int a[] = {-2,-3,4,1,-2,1,5,13};
    int val= sizeof(a)/sizeof(a[0]);
    int flag=0, dem = 0, max=0;
    /* for(int i=0; i<val; i++){
        a[i]= rand() % 100 +1;
        cout << a[i] << "\t" ;
    } */
    cout << endl;
    for (int i=0;i  < val-1; i++){
        if(a[i] <=  a[i+1]){
            if(a[i] >= a[flag]){
                cout << a[i] << endl;
                dem++;
            }
        } else if (a[i] > a[i+1]){
            if ((a[i] >= a[flag]) && ((a[flag] !=a[0]) || (a[flag] == a[0]))){
                cout << a[i] << endl;
            } 
            flag = i;
            if (dem > max) max = dem;
        }
    }
}