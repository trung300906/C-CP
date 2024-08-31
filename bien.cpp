#include <iostream>
using namespace std;

int gmode; // khai báo biến toàn cục

#if 0
    #if 0
    int main(){
        int a{6};
        int b{7}; // các biến a b c được tạo ở đây
        int c{8};
        cout << a << b << c << endl;
    } // các biến a b c sẽ được phá hủy và không dùng được khi ra khỏi đây
    #endif
    // các ví dụ khác, các khối được lồng nhau

    #if 0
    int main()
    {
        int a{9}; // biến a được khởi tạo ở đây
            {
                int b{10}; // biến b được khởi tạoh trong bloc 2
                cout << a << "\n";
                cout << b << "\n";
            }; // biến b bị hủy và mất vùng nhớ trên ram
            /* cout << b; */ // ko dùng được biến b
            cout  << a << "\n"; // biến a vẫn dùng được
    }// biến a bị phá hủy
    #endif

    #if 0
    // các ví dụ về các khối ngoài không lồng nhau
    void Function(){
        int a{9}; // biến a được khởi tạo ở đây
    }// biến a bị hủy ở 


    int main(){
        // không thể kê khai hàm function ở đây, kq cho ra là 1 function rỗng ko có giá trị dù đã được kê khai
        Function();

        return 0;
    }// cx vì thế mà khi kê khai với 1 hàm khác, nó cũng sẽ không bị xung đột về biến
    #endif
    //----------------------------------------------------------------

#endif

#if 0
// lưu ý, hàm void không trả về bấtc ứ giá trị nào, nên nếu trong void mà cho return thì sẽ lỗi môi trường
int CPlayer(int x, int y){
    return x + y;
}

int main(){
    int x{5};
    int y{6};
    cout << CPlayer(x,y) << endl;
    return 0;
} 
#endif
void dốmethings(){
    gmode = 2; // biến cục bộ, cùng tên có thể không bị xung đột
}

int main(){
    dốmethings();          
    gmode =1; //=> biên dịch từ trên xuống dưới, dùng biến toàn cục khó quản lý biến=> không khuyến khuých dùng biến toàn cục
    switch (gmode){
        case 1:
            cout <<"defautl";
            break;
        default :
            cout <<"changed";
            break;
    return 0;
    }
}