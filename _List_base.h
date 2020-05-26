#ifndef ____List_base__
#define ____List_base__
#include "_List_impl.h"
#include "_List_node.h"
template<class _Tp>
class _List_base
{
    _List_impl<_Tp>* _M_Impl=nullptr;

    public:
        virtual _List_node _M_get_node()=0;
        virtual void _M_put_node(_Tp)=0;
        virtual ~_List_base()=default;
};
#endif // ___h__
