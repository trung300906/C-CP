#include <bits/stdc++.h>
using namespace std;
#define HANG 100
#define COT 100
//bài 1
#if 0
int main(){
    srand(time(NULL));
    int hang,cot,tong,tong1,zigma;
    tong=0;
    tong1=0;
    cout << "nhap so hang, cot \t";
    cin >> hang >> cot;
    int arr[hang][cot];
    int arr1[hang][cot];
    for (int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            arr[i][j]=rand()% 100 +1;
            arr1[i][j]=rand()% 100 +1;
        }
    }
    for (int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            tong=tong+arr[i][j];
            tong1=tong1+arr1[i][j];
        }
    }
    zigma=tong+tong1;
    cout << "tổng hai ma trận là: " << zigma;
}
#endif
//bài 2
#if 0
int snt(int k){
    float can=sqrt(k);
    if(k<2){
        return false;
    } else {
        for(int i=2;i<=can;i++){
            if(k%i==0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    srand(time(NULL));
    int hang,cot;
    cout << "nhap so hang, cot \t";
    cin >> hang >> cot;
    int arr[hang][cot];
    for (int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            arr[i][j]=rand()%100 +1;
            if(snt(arr[i][j])){
                cout << "số nguyên tố của mảng 2 chiều là: " << arr[i][j] << endl;
            }
        }
    }
}
#endif
//bài 3
#if 0
void sapxep(int arti[][COT], int hang, int cot, int hanggoc, int hangdt, int cotgoc, int cotdt){
#if 0 // cách 1, dùng não lvl max
    int fake;
    for (int i=0; i<hang;i++){
        fake=arti[i][cotdt];
        arti[i][cotdt]=arti[i][cotgoc];
        arti[i][cotgoc]=fake;
    }
    for (int j=0;j<cot;j++){
        fake=arti[hangdt][j];
        arti[hangdt][j]=arti[hanggoc][j];
        arti[hanggoc][j]=fake;
    }
#endif
#if 0 // dùng swap, có tác dụng hoán đổi giá trị của 2 phần tử
    for(int i=0;i<hang;i++){
        swap(arti[i][cotdt],arti[i][cotgoc]);
    }
    for(int i=0;i<cot;i++){
        swap(arti[hangdt][i],arti[hanggoc][i]);
    }
#endif
}
int main(){
    srand(time(NULL));
    int arr[HANG][COT];
    int hang,cot;
    cout << "nhập số hàng, cột : "; cin >> hang >> cot;
    int hanggoc,hangdt,cotgoc,cotdt;
    for (int i=0;i<hang;i++){
        for(int j=0; j<cot; j++){
            arr[i][j]=rand()%100 +1;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "nhập hàng cần đổi: "; cin >> hanggoc;
    cout << "hàng đổi tới là: "; cin >>hangdt;
    cout << "nhập cột cần đổi: "; cin >> cotgoc;
    cout << "cột đổi tới là: "; cin >>cotdt;
    sapxep(arr,hang,cot,hanggoc,hangdt,cotgoc,cotdt);
    for (int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
#endif
//bài 4
#if 0
void xoa(int a[][COT],int hang, int cot, int hangx, int cotx){
    int hangtam=hang;
    int cottam=cot;
    //xóa cột
    for(int i=0; i < hangtam; i++){ // duyệt qua theo chiều dọc
        for(int j=cotx; j<cot-1; j++){ // đoạn for này có tác dụng là đẩy tất cả giá trị cột này sang bên trái 1 đơn vị
            a[i][j] =a[i][j+1];
        }
    }
    cot--;
    for(int i=0; i < cottam; i++){ // duyệt qua theo chiều ngang
        for(int j=hangx; j<hang-1; j++){// đoạn for này có tác dụng là đẩy tất cả giá trị hàng này lên trên 1 đơn vị
            a[j][i] =a[j+1][i];
        }
    }
    hang--;
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
int main(){
    srand(time(NULL));
    int ar2d[HANG][COT];
    int hang,cot,hangx,cotx;
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            ar2d[i][j]=rand()%100 +1;
            cout << ar2d[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "nhập số hàng xóa: "; cin >> hangx;
    cout << "nhập số cột xóa: "; cin >> cotx;
    xoa(ar2d,hang,cot,hangx,cotx);
}
#endif
//bài 5
#if 0
void find(int **a, int n){
    int max = a[0][0];
    int min = a[0][n-1];
    for (int i = 0; i < n; i++){
        if (a[i][i] > max) max = a[i][i];
        if (a[i][n-i-1] < min) min = a[i][n-i-1];
    }
    cout << "max trên đường chéo chính là: " << max << endl;
    cout << "min trên đường chéo phụ là: " << min << endl;
}
int main(){
    srand(time(NULL));
    cout << "nhập số lượng phần tử của ma trận theo cạnh: "; 
    int n;
    cin >> n;
    int **a=new int*[n];
    for (int i=0;i<n;i++){
        a[i]= new int[n];
        for (int j=0;j<n;j++){
            a[i][j]=rand() % 100 + 1;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    find(a,n);
    for (int i=0;i<n;i++){
        delete[] a[i];
    }
    delete[] a;
    /*
    Dòng int** a = new int*[n]; có nghĩa là cấp phát bộ nhớ động cho một mảng các con trỏ int có độ dài n và gán địa chỉ
    của mảng này cho con trỏ a. Mỗi phần tử của mảng này là một con trỏ int có thể trỏ đến một mảng int khác. Kết hợp với các 
    dòng tiếp theo trong đoạn code:

    for (int i=0;i<n;i++){
        a[i] = new int[n];
        ...
    }   
    Mỗi phần tử của mảng a được gán bằng địa chỉ của một mảng int có độ dài n được cấp phát động. 
    Kết quả là a trở thành một mảng các con trỏ, trong đó mỗi con trỏ trỏ đến một mảng int, tạo thành một mảng 2D có kích thước n x n.
    */
}
#endif
//bài 6
#if 0
bool scp(int n){
    if (ceil(sqrt(n))==floor(sqrt(n))){
        return true;
    } else return false;
    return true;
}
int main(){
    int hang,cot;
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    int ar2d[hang][cot];
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            cin >> ar2d[i][j];
        }
    }
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            cout << ar2d[i][j] << "\t";
        }
        cout << endl;
    }
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            if (scp(ar2d[i][j])){
                cout << "số chính phương là: " << ar2d[i][j] << endl;
                break;
            }
        }
    }
}
#endif
// bài 7
#if 0
bool checkso(int i){
    if (i % 2 == 0){
        return true;
    } else return false;
    return true;
}
int main(){
    int hang,cot,dem;
    dem=0;
    srand(time(NULL));
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    int ar2d[hang][cot];
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            ar2d[i][j]=rand();
        }
    }
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            cout << ar2d[i][j] << "\t";
        }
        cout << endl;
    }
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            if (checkso(ar2d[i][j])){
                break;
            } else {
                dem++;
                if(dem == (hang-1)){
                    cout << "====================" << endl;
                    cout << "hàng toàn số lẻ là " << i+1 << endl;
                }
            }
        }
    }
    if (dem == 0){
        cout << "ko có hàng nào toàn số lẻ!" ;
    }
}
#endif
// bài 8
#if 0
int main(){
    int hang,cot,max;
    srand(time(NULL));
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    int ar2d[hang][cot];
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            ar2d[i][j] = rand();
        }
    }
    max = ar2d[0][0];
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            if (max < ar2d[i][j]){
                max = ar2d[i][j];
            }
        }
    }
    cout << max << endl;
    if (max % 2 == 0){
        max+=2;
    } else if (max % 2 != 0){
        max +=1;
    }
    cout << "số chẵn lớn hơn tất cả cấc giá trị trong mảng là: " << max << endl;
}
#endif
// bài 9
#if 0
void tong(int a[][COT], int hang, int cot)
{
    int tong = 0;
    for (int i = 0; i <hang; i++){
        tong += (a[i][0] + a[i][cot-1]);
    }
    for (int j=1;j<cot-1;j++){
        tong += (a[0][j] + a[hang-1][j]);
    }
    cout <<"tổng là " << tong << endl;
}
int main(){
    int hang,cot;
    int ar2d[HANG][COT];
    srand(time(NULL));
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            ar2d[i][j] = rand() % 100 +1;
            cout << ar2d[i][j] << "\t";
        }
        cout <<  endl;
    }
    tong(ar2d, hang, cot);
}
#endif
// bài 10
#if 0
// ứng dụng cơ chế bật tắt bóng đèn :))
void logic(int a[][COT], int hang, int cot){
    int dem;
    dem=0;
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            bool cucdai=true;
            for (int g=i-1; g<=i+1; g++){ // duyệt qua các hàng xung quanh phần tử
                for (int k=j-1; k<=j+1; k++){ // duyệt qua các cột xung quanh phần tử
                    //if này để kiểm soát vùng biên và các số duyệt qua
                    if(g>=0 && g<hang && k>=0 && k<cot && a[g][k] != a[i][j]){
                        if (a[i][j] <= a[g][k]){
                            cucdai=false;
                        }
                    }
                }
            }
            if (cucdai){
                dem++;
                cout << "các phần tử cực đại: " << a[i][j] << endl;
            }
        }
    }
    cout <<"số phần tử cực đại của mảng là: " <<dem << endl;
}
int main(){
    int hang,cot;
    int ar2d[HANG][COT];
    srand(time(NULL));
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            ar2d[i][j] = rand() % 100 +1;
            cout << ar2d[i][j] << "\t";
        }
        cout <<  endl;
    }
    logic(ar2d, hang, cot);
}
#endif
//bài 11
#if 1
int main(){
    int hang,cot,cotip,hangip,dem,min_val;
    dem=0;
    hangip=0;
    int ar2d[HANG][COT];
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            cin >> ar2d[i][j];
        }
    }
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            cout << ar2d[i][j] << "\t";
        }
        cout <<  endl;
    }
    for ( int i=0; i < hang; i++){
        int *max_ptr=max_element(ar2d[i], ar2d[i]+ cot);
        cotip = distance(ar2d[i], max_ptr); // j là vị trí cot trong hang đó mà tại đó nó là max
        min_val=ar2d[0][cotip];
        for ( int j = 1; j < hang ; j++){
            if(min_val >  ar2d[j][cotip]){
                min_val = ar2d[j][cotip];
                hangip=j;
            }
        }
        if(ar2d[i][cotip]==ar2d[hangip][cotip]){
            dem++;
            cout << ar2d[i][cotip] << endl;
        }
    }
    if(dem==0){
        cout << "không có phần tử yên ngựa nào";
    } else cout << "số phần tử yên ngựa là: " <<  dem << endl;
}
#endif
// bài 12
#if 0
int main(){
    int hang,cot;
    int ar2d[HANG][COT];
    srand(time(NULL));
    cout << "nhập số hàng: "; cin >> hang;
    cout <<"nhập số cột: "; cin  >> cot;
    for(int i=0;i<hang;i++){
        for(int j=0; j<cot;j++){
            ar2d[i][j] = rand() % 100 +1;
            cout << ar2d[i][j] << "\t";
        }
        cout <<  endl;
    }
    system("pause");
}
#endif