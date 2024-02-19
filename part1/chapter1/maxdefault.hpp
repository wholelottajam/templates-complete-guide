#ifndef TEMPLATES_COMPLETE_MAXDEFAULT_HPP
#define TEMPLATES_COMPLETE_MAXDEFAULT_HPP

#include <type_traits>

// default template arguments
template <typename T1, typename T2, typename RT = std::decay_t<decltype(true?T1():T2())>>
RT max (T1 a, T2 b) {
    return b < a ? a : b;
};

// can also be done by common type
template <typename T1, typename T2, typename RT = std::common_type_t<T1, T2>>
RT max2 (T1 a, T2 b) {
    return b < a ? a : b;
}

// put RT as first argument
template <typename RT = long, typename T1, typename T2>
RT max3 (T1 a, T2 b) {
    return b < a ? a : b;
}

#endif //TEMPLATES_COMPLETE_MAXDEFAULT_HPP
