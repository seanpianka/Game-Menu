#ifndef __MINIA__ITEM__HPP__
#define __MINIA__ITEM__HPP__

#include "unique_id.hpp"
#include "function.hpp"


class Item
{
public:
    Item(const Function&);
    bool is_broken();

private:
    const Function& _function;
    double _durability;
    double _weight;
    uint32_t _size;
};

const Item empty{FunctionEmpty(1, 0, 0)};

#endif
