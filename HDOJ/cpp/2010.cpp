#include <iostream>

using namespace std;

bool helper(int n) 
{
    int o = n;
    int res = 0;
    while (n) {
        int tmp = n % 10;
        res += (tmp * tmp * tmp);
        n /= 10;
    }
    return res == o;
}

int main() 
{
    int m , n = 0; 
    while (cin >> m >> n) {
        int size = n - m + 1;
        if (size < 1) {
            continue;
        }
        int res[1000];

        int c = 0;
        for (int i = m; i <= n; i++) {
            if (helper(i)) {
                res[c] = i;
                c++;
            }
        }

        if (c == 0) {
            cout << "no" << endl;
            continue;
        }

        for (int i = 0; i < c; i++) {
            cout << res[i];
            if (i < c - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
