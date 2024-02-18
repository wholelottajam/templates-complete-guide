#ifndef TEMPLATES_COMPLETE_MAXAUTO_H
#define TEMPLATES_COMPLETE_MAXAUTO_H

// deducing the return type

// auto without trailing return type ->
template <typename T1, typename T2>
auto max (T1 a, T2 b) {
    return b < a ? a : b;
}

#endif //TEMPLATES_COMPLETE_MAXAUTO_H
