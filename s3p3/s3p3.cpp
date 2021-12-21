#include "fstream"
#include "iostream"

using namespace std;

int nr_ap[101];

int main() {
    ifstream f("./bac.txt");
    int n, m, a[101], b[101];
    f >> n >> m;

    for (int i = 1; i <= n; i++)
        f >> a[i];
    for (int j = 1; j <= m; j++)
        f >> b[j];

    for (int j = 1; j <= m; j++)
        for (int i = 1; i <= n; i++)
            if (b[j] == a[i])
                nr_ap[j]++;

    int sem = 1, min = nr_ap[1];
    for (int j = 1; j <= m; j++)
        if (nr_ap[j] < min) {
            min = nr_ap[j];
            sem = 0;
        }

    if (sem == 1)
        cout << nr_ap[1];
    else
        cout << min;
}