#include <iostream>
#include <algorithm>

using namespace std;

struct Item {
  int value;
  int weight;
};

bool cmp(Item a, Item b) {
  return a.value / a.weight > b.value / b.weight;
}

int knapsack(int W, int n, Item items[]) {
  // Sắp xếp các vật phẩm theo giá trị trên trọng lượng tăng dần
  sort(items, items + n, cmp);

  // Tạo mảng lưu trữ các vật phẩm đã được chọn
  bool selected[n];
  for (int i = 0; i < n; i++) {
    selected[i] = false;
  }

  // Duyệt qua các vật phẩm, chọn vật phẩm có giá trị trên trọng lượng cao nhất
  int weight = 0;
  int value = 0;
  for (int i = 0; i < n; i++) {
    if (weight + items[i].weight <= W) {
      weight += items[i].weight;
      value += items[i].value;
      selected[i] = true;
    }
  }

  return value;
}

int main() {
  // Số lượng vật phẩm
  int n = 5;

  // Dữ liệu các vật phẩm
  Item items[] = {
      {2, 1},
      {4, 2},
      {6, 3},
      {4, 2},
      {6, 3},
  };

  // Khối lượng của túi
  int W = 10;

  // Giải bài toán
  int res = knapsack(W, n, items);

  // In kết quả
  cout << "Giá trị tối đa của túi là: " << res << endl;

  return 0;
}
