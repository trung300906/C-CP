#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void solve(vector<int>& a, int l, int r, int& count) {
    if (l == r) {
        for (int i = 0; i < a.size() - 2; i++) {
            if (isPrime(a[i] + a[i + 1] + a[i + 2])) {
                count++;
                break;
            }
        }
    } else {
        for (int i = l; i <= r; i++) {
            swap(a[l], a[i]);
            solve(a, l + 1, r, count);
            swap(a[l], a[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    solve(a, 0, n - 1, count);
    cout << count;
    return 0;
}
