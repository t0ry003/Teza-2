#include "iostream"
#include "fstream"

using namespace std;

int main(){
    ifstream f("./bac.txt");
    int n, m, a[101], b[101];
    f >> n >> m;

    for(int i=1; i<=n; i++)
        f >> a[i];
    for(int i=1; i<=m; i++)
        f >> b[i];
    
    
}