#include "iostream"

using namespace std;

int main() {
    int n, y, x;
    cin >> n;
    y = 0;
    while (n > 0) {
        cin >> x;
        while (x % 2 == 0)
            x /= 2;
        if (x = 1)
            y++;
        n--;
    }
    cout << y;
}