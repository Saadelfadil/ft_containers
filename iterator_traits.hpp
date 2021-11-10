#pragma once
#include <iostream>
#include <string>
#include <vector>


namespace ft
{
    template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
        struct iterator {
            typedef T         value_type;
            typedef Distance  difference_type;
            typedef Pointer   pointer;
            typedef Reference reference;
            typedef Category  iterator_category;
};

template <class Iter>
class Iterator_traits
{
    public:
        typedef typename Iter::iterator_category iterator_category;
        typedef typename Iter::value_type value_type;
        typedef typename Iter::difference_type difference_type;
        typedef          difference_type Iter::distance_type;
        typedef typename Iter::pointer pointer;
        typedef typename Iter::reference reference;
};

template <typename Iter>
class Iterator_traits<Iter*>
{
    public:
        typedef typename Iter::iterator_category iterator_category;
        typedef typename Iter::value_type value_type;
        typedef typename Iter::difference_type difference_type;
        typedef          difference_type Iter::distance_type;
        typedef typename Iter::pointer pointer;
        typedef typename Iter::reference reference;
};

template <typename Iter>
class Iterator_traits<const Iter*>
{
    public:
        typedef typename Iter::iterator_category iterator_category;
        typedef typename Iter::value_type value_type;
        typedef typename Iter::difference_type difference_type;
        typedef          difference_type Iter::distance_type;
        typedef typename Iter::pointer pointer;
        typedef typename Iter::reference reference;
};

}
