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


int main() {
    int i = 42;

    cout << "max(7,i): " << ::max(7, i) << '\n';

    double f1 = 3.4;
    double f2 = -6.7;
    cout << "max(f1, f2): " << ::max(f1, f2) << '\n';

    string s1 = "mathematics";
    string s2 = "math";
    cout << "max(s1, s2): " << ::max(s1, s2) << '\n';

    // 1.
    // When declaring call parameters by reference, even trivial conversions
    // do not apply to type deduction. Two arguments declared with the same template parameter T
    // must match exactly.

    // 2.
    // When declaring call parameters by value, only trivial conversions that decay are supported.
    // Qualifications with const or volatile are ignored, references convert to the referenced type,
    // and raw arrays or functions convert to the corresponding pointer type.
    // For two arguments declared with the same template parameter T the decayed types must match.

    int const c = 42;
    ::max(i, c); // T is deduced as int
    ::max(c, c); // T is deduced as int
    int const &ir = i;
    ::max(i, ir); // T is deduced as int
    int arr[4];
    ::max(&i, arr); // T is deduced as int*

//    ::max(4, 7.2); // ERROR: T can be deduced as int or double
    // in order to solve this
    // max(static_cast<double>(4), 7.2) or max<double>(4, 7.2) or specify that parameters can be
    // different types
}

// type deduction for default arguments
//template <typename T>
//void f(T = "");

// f(1); OK: T is deduced to be int
// f(): ERROR: cannot deduce T. You have to declare a default argument for template parameter

template <typename T = std::string>
void f(T = "") {

}

// f() OK
