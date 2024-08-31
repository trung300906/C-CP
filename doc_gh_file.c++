#include <bits/stdc++.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

int main(){
    // Lưu lại file descriptor gốc
    int original_stdin = dup(0);
    int original_stdout = dup(1);

    freopen("C:\\Users\\empol\\Downloads\\read.INP", "r", stdin); // có đường dẫn cụ thể
    int n;
    cin >> n;
    vector<int> lines ;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        lines.push_back(x);
    }
    cout << n <<" phần tử" << endl;
    for(auto &i: lines) cout << i << " "; // freopen input ko nhận cout :>
    freopen("C:\\Users\\empol\\Downloads\\readOUT.OUT", "w", stdout);
    for(auto &i: lines) cout << i << " "; // nhận cout

    // Trả lại quyền điều khiển cho màn hình console
    dup2(original_stdin, 0); // Trả lại quyền nhập cho console
    dup2(original_stdout, 1); // Trả lại quyền xuất cho console
    int x;
    cin >> x;
    cout<< endl << x; // Đọc và xuất trên màn hình console
}
