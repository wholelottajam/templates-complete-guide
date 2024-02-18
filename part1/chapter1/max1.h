#ifndef CHAPTER1_H
#define CHAPTER1_H

// T has to support operator <
// also values of type T must be copyable in order to be returned

template <typename T>
T max (T a, T b) {
    return b < a ? a : b;
}

#endif //CHAPTER1_H
