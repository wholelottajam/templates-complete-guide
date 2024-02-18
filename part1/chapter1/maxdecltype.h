#ifndef TEMPLATES_COMPLETE_MAXDECLTYPE_H
#define TEMPLATES_COMPLETE_MAXDECLTYPE_H

// before C++14

template <typename T1, typename T2>
auto max1 (T1 a, T2 b) -> decltype(b<a?a:b) {
    return b<a?a:b;
}

// actually using true is enough
template <typename T1, typename T2>
auto max2 (T1 a, T2 b) -> decltype(true?a:b) {
    return b<a?a:b;
}

// however this has a drawback. it might happen that the return type is a reference type.
// because T can be a reference type, for this reason you should return the type decayed from T:

// decay: returns the resulting type in a member type
// initialization of type auto always decays
#include <type_traits>
template <typename T1, typename T2>
auto max3 (T1 a, T2 b) -> typename std::decay<decltype(true?a:b)>::type {
    return b < a ? a : b;
}

#endif //TEMPLATES_COMPLETE_MAXDECLTYPE_H
