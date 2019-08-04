#pragma once
#include "Tree.hpp"

template <class D>
class NonEmptyBSD: public Tree<D> {
    public:
    D data;
    Tree left;
    Tree right;
    NonEmptyBSD(D elm);
};