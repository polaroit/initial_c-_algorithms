namespace
{
  template <typename Item>
  void exch(Item &A, Item &B)
  {
     Item t = A;
     A = B;
     B = t;
  }

  template<typename Item>
  class les
  {
  public:
    bool operator() (const Item &A, const Item &B)
      {
          return A < B;
      }
  };
}


///selection_sort
template <typename Item, typename Comparator>
void selection_sort(Item *a, size_t l, size_t r, Comparator comp)
{
 for (size_t i = l; i < r; ++i)
 {
     size_t min = i;
     for (size_t j = i + 1; j <= r; ++j)
         if (comp(a[j], a[min]))
             min = j;
      exch(a[i], a[min]);
 }
}

template <typename Iterator>
void selection_sort(Iterator begin, Iterator end)
{
    for(auto it = begin; it != end; ++it)
    {
        auto min_el = it;
        for (auto it_cur = it + 1; it_cur != end; ++it_cur)
            if (*it_cur < *min_el)
                min_el = it_cur;
         exch(*it, *min_el);
    }
}

template <typename Iterator, typename Comparator>
void selection_sort(Iterator begin, Iterator end, Comparator comp)
{
    for(auto it = begin; it != end; ++it)
    {
        auto min_el = it;
        for (auto it_cur = it + 1; it_cur != end; ++it_cur)
            if (comp(*it_cur, *min_el))
                min_el = it_cur;
         exch(*it, *min_el);
    }
}

///insertion_sort
template <typename Item, typename Comparator>
void insertion_sort(Item *a, std::size_t l, std::size_t r, Comparator comp)
{
    for (size_t i = l + 1; i <= r; ++i)
    {
        size_t j = i;
        Item v = a[i];
        while (j > 0 && comp(v, a[j - 1]))
        {
            a[j] = a[j - 1];
            --j;
        }
      a[j] = v;
    }
}


template <typename Iterator>
void insertion_sort(Iterator begin, Iterator end)
{
    for (auto it = begin + 1; it < end; ++it)
    {
        auto it_cur = it;
        auto v = *it;
        while (it_cur != begin && (v < *(it_cur - 1)))
        {
               *it = *(it_cur - 1);
               --it_cur;
               --it;
        }
      *it = v;
    }
}


template <typename Iterator, typename Comparator>
void insertion_sort(Iterator begin, Iterator end, Comparator comp)
{
    for (auto it = begin + 1; it < end; ++it)
    {
        auto it_cur = it;
        auto v = *it;
        while (it_cur != begin && (comp(v, *(it_cur - 1))))
        {
               *it = *(it_cur - 1);
               --it_cur;
               --it;
        }
      *it = v;
    }
}
