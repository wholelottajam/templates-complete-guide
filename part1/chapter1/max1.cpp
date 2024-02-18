#include "max1.h"
#include <iostream>
#include <string>

using namespace std;

// we use ::max in order to ensure that our max func is found
// in global namespace. There is also std::max in std library which
// under some circumstances may be called or may lead to ambiguity.
// For example, if one argument type is defined in namespace std (such as std::string),
// according to the lookup rules of C++, both the global and the max() template in std are found


// the process of replacing template parameters by concrete types is called instantiation.

void main_2();

int main() {
    int i = 42;

    cout << "max(7,i): " << ::max(7, i) << '\n';

    double f1 = 3.4;
    double f2 = -6.7;
    cout << "max(f1, f2): " << ::max(f1, f2) << '\n';

    string s1 = "mathematics";
    string s2 = "math";
    cout << "max(s1, s2): " << ::max(s1, s2) << '\n';
}

// 1.
// When declaring call parameters by reference, even trivial conversions
// do not apply to type deduction. Two arguments declared with the same template parameter T
// must match exactly.

// 2.
// When declaring call parameters by value, only trivial conversions that decay are supported.
// Qualifications with const or volatile are ignored, references convert to the referenced type,
// and raw arrays or functions convert to the corresponding pointer type.
// For two arguments declared with the same template parameter T the decayed types must match.