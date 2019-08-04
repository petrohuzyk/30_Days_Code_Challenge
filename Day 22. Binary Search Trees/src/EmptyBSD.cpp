#include "EmptyBSD.hpp"

template <class D>
EmptyBSD<D>::EmptyBSD() {

}

template <class D>
bool EmptyBSD<D>::isEmpty() {
    return true;
}

template <class D>
int EmptyBSD<D>::cardinality() {
    return 0;
}

template <class D>
bool EmptyBSD<D>::member(D el) {
    return false;
}