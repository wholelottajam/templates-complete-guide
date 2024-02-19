#ifndef TEMPLATES_COMPLETE_MAXCOMMON_H
#define TEMPLATES_COMPLETE_MAXCOMMON_H

#include <type_traits>

// common type returns double if T1 is int and T2 is double etc

template <typename T1, typename T2>
std::common_type_t<T1, T2> max (T1 a, T2 b) {
    return b < a ? a : b;
}

#endif //TEMPLATES_COMPLETE_MAXCOMMON_H
