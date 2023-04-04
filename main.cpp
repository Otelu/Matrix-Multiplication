#include <iostream>
using namespace std;

int main() {
    int a[20][20], b[20], c[20];
    int i, j, k, n, m; //n - rows, m - columns

    cout << "Number of rows: "; cin >> n;
    cout << "Number of columns: "; cin >> m;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
        }
    }

    for(k=0;k<m;k++) {
        cout << "b[" << k << "] = "; cin >> b[k];
    }

    for(j=0;j<m;j++) {
        c[j] = 0;
        for(k=0;k<m;k++) {
            c[j] += b[k]*a[k][j];
        }
    }


    cout << "The resulting vector is: " << endl;
    for(k=0;k<m;k++) {
        cout << "c[" << k << "] = " << c[k] << endl;
    }

    return 0;
}
