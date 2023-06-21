#include "Functions.h"
using namespace std;



int main() {
    Circle c1(1, 4, 2, 5);
    Circle c2(3.0, 4, 5);
    Circle c3(2);
    print(c1, "c1");
    print(c2, "c2");
    print(c3, "c3");
    draw_line();
    ++c1;
    c2++;
    c3 = c3 * 3;
    print(c1, "c1");
    print(c2, "c2");
    print(c3, "c3");
    draw_line();
    string name_circle;
    Circle largestCircle = findLargestCircle(c1, c2, c3, name_circle);
    cout << "The largest circle is ";
    print(largestCircle, name_circle);
    return 0;
}