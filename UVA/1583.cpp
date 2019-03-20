// 
// @ClassName 1583
// @Description TODO
// @Date 19-3-20 下午9:58
// @Created by Insomnia
//

#include <iostream>
#include <map>

using namespace std;


int getSum(int num) {
    int sum = num;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {

    map<int, int> hashMap;
    for (int i = 1; i < 100000; i++) {
        int key = getSum(i);
        if (hashMap[key] == 0 || i < hashMap[key]) {
            hashMap[key] = i;
        }
    }

    int cnt;
    cin >> cnt;
    while (cnt--) {
        int tar;
        cin >> tar;
        if (hashMap.find(tar) != hashMap.end()) {
            cout << hashMap[tar] << endl;
        } else {
            cout << 0 << endl;
        }

    }
    return 0;
}