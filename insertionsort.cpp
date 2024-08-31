#include <bits/stdc++.h>
using namespace std;
bool compt(int a, int b){
    return a>b; // đảo vị trí a lên b, từ đó đổi cả dãy
}
int main(){
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0; */

    int n;
    cin >> n;
    int arr[n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        arr[i]== rand() % 10 +1;
    }
    sort(arr, arr + n +1, compt);
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

