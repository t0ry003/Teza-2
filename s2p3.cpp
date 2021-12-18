#include "iostream"

using namespace std;

int main() {
    int A[101][101];

    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            if (j == 5 - i + 1)
                A[i][j] = 3;
            if (j < 5 - i + 1)
                A[i][j] = 1;
            if (j > 5 - i + 1)
                A[i][j] = 2;
        }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++)
            cout << A[i][j] << " ";
        cout << '\n';
    }
}