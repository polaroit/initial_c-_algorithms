#include "algo.h"

#include <algorithm>
#include <iostream>
using std::begin;
using std::end;
template<typename Item>

class q
{
public:
  bool operator() (const Item &A, const Item &B)
    {
        return A > B;
    }
};


int main()
{

int a[] = {-5, 3, 0 ,9, 1, 2, 7, 3, 5, -5, -199};

//sortFun::selection_sort(a, 0, 9);
//sortFun::selection_sort(begin(a), end(a));
//sortFun::insertion_sort(a, 0, 9);
//sortFun::insertion_sort(begin(a), end(a));
sortFun::insertion_sort(begin(a), end(a), q<int>());


std::for_each(begin(a), end(a),
              [](const int &a){std::cout << a << ' ';});

    return 0;
}
