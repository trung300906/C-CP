#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    #if 0
    char buf[12]; //xác định độ dài trực tiếp
    buf [1] = 'h';
    buf [2] = 'e';
    buf [3] = 'l';
    buf [4] = 'l';
    buf [5] = 'o';
    buf [6] = 'e';
    buf [7] = '\0';
    cout << buf << endl;

    cout << buf << endl; // cho giá trị random kí tự
    //or 
    char sz[] = "Kteam"; // Tự động thêm '\0' vào cuối chuỗi, tự xác định độ dài
    sz[0] = 'F';
    sz[1] = 'r';
    sz[2] = 'e';
    sz[3] = 'e';
    sz[4] = 'E';
    char tte[] = "hello";
    cout << tte << endl;
    cout << sz << endl;

    char lmao[10];
    /* cin >> lmao; */
    cin.getline(lmao, 10); //dùng getline để đẩy khoảng cách và enter vào vùng nhớ ram cho 1 vị trí của mảng
    cout << lmao << endl;
    #endif

/*     string k;
    getline(cin, k);
    dùng cho biến đơn ko dùng cho hàm */
    char con[] = "ketasd";
    char aib[] = "HELLO ketasd";
    cout << strlen(con)<< endl;  
    cout << sizeof(con) << endl;
    /* strlwr(con);// hàm viết thuoen cho kí tự trong mảng
    cout << con << endl;
    strupr(con); // hàm viết hoa cho kí tự trong mảng
    cout << con << endl;
 */
    /* strcpy(aibt, con); // hàm copy cho mảng khác
    cout << aibt << endl; //in cái phía đã được in hoa do trương trình dịch từ trên uống dưới
 */
    //hàm nối chuỗi

/*     strcat(aibt, " "); // hàm nối chuỗi kí tự cảu aibt vs _
    strcat (aibt, con);// hàm nối chuỗi đã có từ trước với chuỗi str con
    cout << aibt << endl; */

    //hàm so sánh giá trị của 2 mảng giá trị
    int result =  strcmp(con, aib); // so sánh độ dài kí tự mà nó có chứ ko so sánh cả null , nó lấy giá trị trong bảng mã ascii
    cout << result << endl;

    if (strstr(aib, con) == NULL){ // tìm kí tự có trong mảng sau
        cout << "ko tìm thấy" << endl;
    } else {
        cout << "tìm thấy " << endl;
    }
}
//}
