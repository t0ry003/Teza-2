#include "iostream"

using namespace std;

int numarare(int a, int b) {
    int nr = 0;
    if (a > b)
        swap(a, b);
    for (int i = a; i <= b; i++) {
        int nr_div = 0;
        for (int d = 1; d <= i; d++)
            if (i % d == 0)
                nr_div++;
        if (nr_div == 3)
            nr++;
    }
    return nr;
}

int main() { cout << numarare(6, 36); }