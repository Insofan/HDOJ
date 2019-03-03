// 
// @ClassName 2001
// @Description TODO
// @Date 19-3-4 上午12:17
// @Created by Insomnia
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x1, y1, x2, y2;

    while (cin >> x1 >> y1 >> x2 >> y2) {
        double width = abs(x2 - x1);
        double height = abs(y2 - y1);

        double len = sqrt((width * width) + (height * height));
        printf("%.2f\n", len);
    }
    return 0;
}