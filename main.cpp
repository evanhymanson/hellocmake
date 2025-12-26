#include <iostream>
#include "mathlib/mathlib.h"
#include "stringlib/stringlib.h"
#include "geomlib/geomlib.h"

using namespace std;

int main() {
    // Test individual libraries 
    cout << "5 + 3: " << add(5,3) << endl;
    cout << "5 * 3: " << multiply(5,3) << endl;

    cout << "Upper: " << toUpper("hello") << endl;
    cout << "Reverse " << reverse("hello") << endl;

    cout << "Circle area r = 5: " << circleArea(5.0) << endl;
    cout << "Rectangle area 4x6: " << rectangleArea(4.0, 6.0) << endl;

    return 0;
}