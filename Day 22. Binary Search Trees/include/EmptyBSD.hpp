#pragma once
#include "Tree.hpp"
#include "NonEmptyBSD.hpp"

template <class D>
class EmptyBSD: public Tree<D> {
 public:
 EmptyBSD();
 
 bool isEmpty();
 int cardinality();
 bool member(D el);
 NonEmptyBST<D> add(D el) {
     return NonEmptyBST<D>(el);
 };
};