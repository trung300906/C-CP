#include <iostream>
using namespace std;

bool isPalindrome(long long n, long long base) {
    long long reversed = 0;
    for (long long i = n; i != 0; i /= base)
        reversed = reversed * base + i % base;
    return n == reversed;
}

int main() {
    long long n = LONG_LONG_MAX;
    for(long long i = 0; i <= n; i++) {
        if(isPalindrome(i, 10) && isPalindrome(i, 2)) {
            cout << i << " ";
            if(i == 0) {
                cout << 0;
            } else {
                for(long long j = 31; j >= 0; j--) {
                    if(i & (1 << j)) {
                        for(long long k = j; k >= 0; k--)
                            cout << ((i & (1 << k)) != 0);
                        break;
                    }
                }
            }
            cout << endl;
        }
    }
}
