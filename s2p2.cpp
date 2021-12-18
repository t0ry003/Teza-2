#include "iostream"

using namespace std;

struct punct {
    int x, y;
};
struct poligon {
    int nr_vf;
    punct vf[20];
} p;

int main() {
    cin >> p.nr_vf;
    for (int i = 0; i < p.nr_vf; i++)
        cin >> p.vf[i].x >> p.vf[i].y;
}