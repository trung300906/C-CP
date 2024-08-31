/* #include <iostream>
using namespace std;

int main(){
    cout  << "nhập kí tự" << endl;
    string nhapkitu;
    getline(cin, nhapkitu);
    return 0;
} */
/* #include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your age: ";
    int nAge;
    cin >> nAge;

    cout << "Enter your name: ";
    string strName;
    getline(cin, strName);

    cout << "Hello, " << strName << endl;
    cout << "Your age " << nAge << endl;

    return 0;
} */
/* lưu ý, khi nhập số hay các kí tự bằng cin, enter sẽ được xử lí và đẩy vào bộ nhớ đệm, nên là khi nhập tới getline sẽ bị đẩy enter ra làm mất 
nhập chuỗi */
#include <iostream>
#include <string>
using namespace std;

int main(){
    #if 0
    cout <<"nhập 1 hàng dài thử đi: \t";
    string nVarname ; 
    getline(cin, nVarname, '.'); //cú pháp để có thể ghi được nhiều dòng là thêm 1 kí tự đặc biệt để nhận biết vào cuối dòng, ở đây là /* '.' */.
    cout << nVarname << endl;
    //toán tử nối chuỗi, được dùng bằng dấu cộng cho 2 string 
    string a,b,c;
    getline (cin, a); // sau getline bên trên enter vẫn còn ở nhớ đệm => a bị bỏ qua
    cout << "\n";
    getline (cin, b);
    cout <<"B: " << b << endl;
    c = a+b;
    cout <<"\n" << c << endl;
    #endif
    // lấy độ dài của chuỗi, dùng lệnh length hoặc size(sizeof lấy byte của biến)
    string nvarname;
    getline(cin, nvarname);
    cout<< "nvarname have" << nvarname.length() << " char " << endl;
    cout<< "nvarname have" << nvarname.size() << " char " << endl;
}