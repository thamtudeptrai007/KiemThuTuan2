#include <bits/stdc++.h>
using namespace std;

int n, a[1000], q;

void Print() {
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (q--) {
        int x, i;
        cin >> x >> i;
        if (x < 1 || x > 2) {
            cout << "Invalid Input\n";
            continue;
        }
        if (x == 1) {
            if (i <= 0) {
                cout << "Invalid Input\n";
            } else if (i <= n / 2) {
                sort(a + 1, a + 1 + i);
                Print();
            } else if (i <= n) {
                sort(a + i, a + 1 + n, greater<int>());
                Print();
            } else {
                cout << "Invalid Input\n";
            }
        } else {
            if (i <= 0) {
                cout << "Invalid Input\n";
            } else if (i <= n / 2) {
                sort(a + 1, a + 1 + i, greater<int>());
                Print();
            } else if (i <= n) {
                sort(a + i, a + 1 + n);
                Print();
            } else {
                cout << "Invalid Input\n";
            }
        }
    }

}
