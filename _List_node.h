#ifndef ____List_node__
#define ____List_node__
#include"_List_node_base.h"
template<class _Tp>
class _List_node:public _List_node_base<_Tp>
{
    _Tp _M_data;
};
#endif // ___h__
