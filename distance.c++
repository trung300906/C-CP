#include <iostream>
#include <algorithm>
#include  <list>
using namespace std;

int main(){
    int arr[]={1, 2, 3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    int *maxele= max_element(arr, arr + 10);
    int ip = distance(arr, maxele);
    cout << ip << endl;

    std::list<int> l = {3, 1, 4, 1, 5, 9};

    // Tính khoảng cách giữa hai trình lặp
    auto it1 = l.begin();
    auto it2 = std::next(it1, 3);
    int distance = std::distance(it1, it2);

    std::cout << "Khoảng cách giữa hai trình lặp là: " << distance << std::endl;

    std::cout << "Giá trị nhỏ nhất của kiểu int là: " << INT_MIN;

    return 0;
}