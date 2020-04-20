#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int cnt;
    while (cin >> cnt) {
        if (cnt <= 0) {
            break;
        }

        double arr[100];
        for (int i = 0; i < cnt; i++) {
            cin >> arr[i];
        }
        
        int neg = 0;
        int zero = 0;
        int pos = 0;

        for (int i = 0; i < cnt; i++) {
            if (arr[i] > 0) {
                pos++;
            } else if (arr[i] < 0) {
                neg++;
            } else if (arr[i] == 0) {
                zero++;
            }
        }
        cout << neg << " " << zero << " " << pos << endl;
    }
    return 0;
}
