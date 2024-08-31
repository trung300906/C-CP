#include <bits/stdc++.h>
using namespace std;

int checkvitri(int n){
    float can;
    if(n>=2){
        can=sqrt(n);
        for (int j=2; j<=can;j++){
            if(n%j==0){
                return false;
            } 
        }
    } else return false;
    return true;
}
void rand_text(int length, char text){
    int rand_int;
    char char_text[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzquot";
    for ( int i=0; i<length; i++){
        text[i]
    }
}


int main(){
    int n,vitri,i,dem,fp,length;
    dem=0;
    srand(time(NULL));
    cout <<"nhap so ga "; 
    cin >> n;
    int sokg[n];
    char mau[n];
    char ndm;
    int max;
    cout << "nhập màu yêu cầu "; cin >> ndm;
    cout << "nhập màu từng con :" << endl;
    for (int i=0; i<n; i++){
        cout << "mau con thu " << i+1 << "la: ";
        cout << "mau con thu " << i+1 << "la:" << mau[i] << endl;
        sokg[i+1]=rand() % 100 +1;
        cout << "sokg: " << sokg[i+1] << endl;
    }
    // cho boc con dau tien ra
    for (int i=0; i<=n; i++){
        if(checkvitri(i)==true && mau[i]==ndm)
        {
            vitri=i;
            fp=i;
            max=sokg[vitri];
            break;
        } 
    } 
    cout << "-----------------------------" << endl;
    // cho boc con
    for (int i=vitri+1; i<n; i++){
        if(checkvitri(i)==true && mau[i]==ndm){
            if(max<sokg[i]){
                max=sokg[i];
                vitri=i;
            }
        }
    }
    cout <<"max="<<max<<endl;
    cout << fp << endl;
    for(int i=fp;i<n;i++){
        if(checkvitri(i)==true && mau[i]==ndm && max==sokg[i]){
            dem++;
            cout << "vi tri con ga la: " << i << endl;
        }
    }  
    cout <<"so ga thoa man la: " << dem << endl;
    exit:
    cout << "finish";
}