#include <iostream>
#include<math.h>
using namespace std;
bool check(int n, int k) {
    int dem = 0;
    int vt;
    while (n > 0) {
        int t = n % 10;
        n /= 10;
        dem += 1;
    if ( t % 2 == 1){
        vt = dem;
        k = dem - vt +1;
        cout << "k \t" << k;
        return false;
    }
    if ( t % 2== 0)
        return true;
    }    
      return true;
}
int main()
{
    int n,k;
        cin >> n;
    for (int i=0; i<n; i++){
        if (check(n,k) == true){
            cout << "yes" << endl;
            break;
        }
        else {
            cout << "\n no"  << endl;
            break;
        }
    }
    return 0;
}