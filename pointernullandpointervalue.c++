#include <iostream>
using namespace std;

#if 1
int main(){
    int *ptr1{NULL};
    int *ptr2;
    cout << ptr1 << " " << ptr2 << endl;
    if(ptr1 ==  NULL){
        cout << "đây là giá trị NULL";
    } else cout << "đây là giá trị chỉ đến địa chỉ";
}
#endif

#if 0
void doSomething(double *ptr)
{
	// ptr sẽ chuyển thành true nếu nó null, và false nếu nó không null
	if (ptr)
		std::cout << "You passed in " << *ptr << '\n';
	else
		std::cout << "You passed in a null pointer\n";
}

int main()
{
	doSomething(nullptr); // truyền 0 có thể gây nhầm lẫn rằng tham số hàm là số nguyên

	return 0;
}

#endif

#if 0
int main()
{
	int array[4] = { 5, 8, 2, 7 };

	// in giá trị địa chỉ của biến array
	cout << "The array has value: " << array << '\n';

	// in địa chỉ của biến array
	cout << "The array has address: " << &array << '\n';

	// in địa chỉ của phần tử array[0]
    for (int i = 0; i <= 5; i++) {
	cout << "Element" << i << " has address: " << &array[i] << '\n';
    // => từ giá trị i = 1 to i = n, &array[i] sẽ có giá trị khác nhau
    }
	system("pause");
	return 0;
}
#endif
#if 0
{
	int array[4] = { 5, 8, 2, 7 };

	// toán tử trỏ (*) trả về giá trị phần tử đầu tiên: array[0]
	cout << *array << '\n'; // 5

	// khai báo con trỏ ptr trỏ vào mảng array
	int *ptr = array;
	cout << *(ptr) << '\n'; // 5

	char name[] = "trung"; // C-style string (mảng char)
	cout << *name << '\n'; // K

	system("pause");
	return 0;
}
#endif