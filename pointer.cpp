#include <bits/stdc++.h>
using namespace std;
#if 1
int main(){
    int n;
    cout << &n << " " << endl;
    cout << n << " " << endl;
    cout << *&n << " " << endl;
// & có nghĩa là vùng nhớ của biến n trên vùng nhớ ram, còn * có nghỉa là truy xuất 
// biến của n trên vùng nhớ ram,tức là nó là 1 con trỏ trỏ đến giá trị của nó tại vị trí gì đó trên vùng nhớ nên bản chất *&n =  n :))
    *&n = 20;
    cout << &n << " " << endl;
    cout << n << " " << endl;
    cout << *&n << " " << endl;

    int *x =  &n  ; // tương tự như *x = *&n nhưng được làm gọn đi, còn nếu *x = n sẽ lỗi do biến con trỏ trỏ tới giá trị của vùng 
    /*  *<biến> có nghĩa là con trỏ trỏ tới địa chỉ của 1 kiểu dữ liệu gì đó của biến đó, nên khi khai báo biến con trỏ
    thì nó phải là chỉ tới giá trị của vùng nhớ( tức là vùng nhớ đó có dạng là gì á) chứ ko phải giá trị của 1 biến trên giá trị của vùng nhớ đó */
    cout << *&x << " " << endl;
    cout << &x << " " << endl;
    cout << *x << " " << endl; // khi này là con trỏ trỏ tới giá trị của giá trị của vùng nhớ trên ram đó, nên nó sẽ xuất ra giá trị là 1 số 
     // vậy nếu thay đổi giá trị của giá trị của vùng nhớ trên ram đó thì sao ?
     //vd
     *x = 100;
     cout << n  << endl;
     cout << &n << endl;

     // int *k= &x; giá trị trả về sẽ nhảy ở 0xxxxxxxx0 nên sẽ ko có giá trị lùi về trên ram = > lỗi sml :))

     // kq xuất ra n là 100, do ta đã thay đổi giá trị của n tại giá trị trên vùng nhớ ram
}
#endif
#if 0
void test(int *&t){

}

int main(){
    int *t;
    test(t);

    cout << *t << endl;
}
#endif