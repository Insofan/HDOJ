// 
// @ClassName 2002
// @Description TODO
// @Date 19-3-4 上午12:29
// @Created by Insomnia
//
#define PI 3.1415927
#include <iostream>

using namespace std;

int main() {


    double radius;
    while (cin >> radius) {
        double res = 4.0/3.0 * PI * radius * radius * radius;
        printf("%.3f\n", res);
    }
    return 0;
}