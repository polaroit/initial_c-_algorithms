
#include <cstddef>

#ifndef ALGO_H
#define ALGO_H

namespace sortFun
{

template<typename Item> class les;

///selection_sort
  template <typename Item, typename Comparator = les<Item>>
  void selection_sort(Item *a, std::size_t l, std::size_t r, Comparator comp = Comparator());

  template <typename Iterator>
  void selection_sort(Iterator begin, Iterator end);

  template <typename Iterator, typename Comparator>
  void selection_sort(Iterator begin, Iterator end, Comparator comp);


///insertion_sort
  template <typename Item, typename Comparator = les<Item>>
  void insertion_sort(Item *a, std::size_t l, std::size_t r, Comparator comp = Comparator());

  template <typename Iterator>
  void insertion_sort(Iterator begin, Iterator end);

  template <typename Iterator, typename Comparator>
  void insertion_sort(Iterator begin, Iterator end, Comparator comp);

///buble_sort
  template <typename Item, typename Comparator = les<Item>>
  void buble_sort(Item *a, std::size_t l, std::size_t r, Comparator comp = Comparator());

  template <typename Iterator>
  void buble_sort(Iterator begin, Iterator end);

  template <typename Iterator, typename Comparator>
  void buble_sort(Iterator begin, Iterator end, Comparator comp);

///shell_sort
   template <typename Item>
   void shell_sort(Item *a, size_t l, size_t r);


  #include "algo.cpp"
}
#endif // ALGO_H

