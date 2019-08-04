#pragma once
#include "NonEmptyBSD.hpp"

template <class D>
class Tree {
 public:
 virtual bool IsEmpty()=0;
 virtual int cardinality()=0;
 virtual bool member(D el)=0;
 virtual NonEmptyBSD<D> add(D el)=0; 
};