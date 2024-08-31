#include <iostream>
using namespace std;

int checkvitri(int vitri){
    if(vitri<2 || (vitri > 2 && vitri % 2 ==0)){
        return false;
    } else {
        for (int i=2;i*i<=vitri;i++){
            if(vitri%i==0){
                return false;
            }
        }
    }
    return true;
}
struct ga{
    string mau;
    int vitri;
    float kg;
};
int main(){
    srand(time(NULL));
    int soluonga,run;
    run=0;
    int max=-1;
    string ncolor;    
    cout << "nhập số lượng gà: "; cin >> soluonga;
    int find[soluonga+1];
    ga ga[soluonga+1];
    cout << "nhập màu yêu cầu: "; cin >> ncolor;
    for (int &i : find){
        i=0;
    }
    ga[0].mau="free";
    for (int i = 1; i <= soluonga;i++){
        ga[i].kg=rand() % 10 +1;
        cout << "nhập màu con thứ " << i <<":"; cin >> ga[i].mau;
        cout << "số kg con thứ " << i <<":" << ga[i].kg << "kg"<< endl; 
    }
    for (int i = 1;i <= soluonga;i++){
        if (checkvitri(i) && ncolor==ga[i].mau){
            find[run]=i;
            max=ga[i].kg;
            break;
        }
    }
    for (int i=find[run]+1; i<= soluonga; i++){
        if (checkvitri(i) && ncolor==ga[i].mau && max==ga[i].kg){
            run++;
            find[run]=i;
        } else if (checkvitri(i) && ncolor==ga[i].mau && max<ga[i].kg){
            max = ga[i].kg;
            run = 0;
            for (int &i : find){
                i=0;
            }
            find[run]=i;
            continue;
        }
    }
    for (int i=0;i<=run;i++){
        cout << "các con gà thỏa là: " << find[i]<< endl;
        if (find[0]==0){
            cout << "ko có con gà nào thỏa điều kiện!" << endl;
            break;
        }
    }
    cout << "số gà thỏa là: " << run + 1 << endl;
    return 0;
}