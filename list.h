#ifndef ___list__
#define ___list__
#include "_List_base.h"
#include<iterator>
#include "_List_node_base.h"
template<class _Tp,typename value_type>
class list:public _List_base<_Tp>
{
public:
    _List_node_base _M_get_node();
    void _M_push_node(_Tp);
    void  push_back(value_type& __x);
    list &operator=(list &&) = default;
    list& operator = (list& __x);
    list()=default;
    ~list()=default;
    void insert(iterator p,value_type x);
    void push_front(value_type __x);
};
#endif