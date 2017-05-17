#ifndef __MINIA__ITEM__HPP__
#define __MINIA__ITEM__HPP__

#include "unique_id.hpp"
#include "entity.hpp"
#include "function.hpp"


class Item : public Entity
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

#endif
