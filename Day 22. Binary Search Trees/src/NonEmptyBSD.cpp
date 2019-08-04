#include "NonEmptyBSD.hpp"
#include "EmptyBSD.hpp"

template <class D>
NonEmptyBSD<D>::NonEmptyBSD(D elm) {
    this->data = elm;
    this->left = EmptyBSD<D>();
    this->right = EmptyBSD<D>();
}