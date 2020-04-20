// 
// @ClassName 2003
// @Description TODO
// @Date 19-3-9 下午11:03
// @Created by Insomnia
//

#include <iostream>

using namespace std;
int main() {
    double num;
    while (cin >> num) {
        printf("%.2f\n", num >= 0 ? num : -num);
    }
    return 0;
}