#ifndef __MINIA__FUNCTION__HPP__
#define __MINIA__FUNCTION__HPP__

#include <cstdint>
#include <vector>
#include "unique_id.hpp"

class Item;

class Function : UniqueId
{
protected:
    Function(const double&, const double&, const uint32_t&);

    double _durability;
    double _weight;
    uint32_t _size;

public:
    virtual ~Function() = 0;
    Function(const Function&);
    void operator=(const Function&);
};

class FunctionStorage : public Function
{
protected:
    std::vector<Item> _inventory;
    const double _MAX_ITEMS;

public:
    FunctionStorage(const double&,
                    const double&,
                    const uint32_t&,
                    const double&,
                    const std::vector<Item>&);
    FunctionStorage(const double&,
                    const double&,
                    const uint32_t&,
                    const double&,
                    std::vector<Item>&&);
};

class FunctionApparel : public Function
{
protected:
    const double _strength;
    const double _defense;

public:
    FunctionApparel(const double&,
                    const double&,
                    const uint32_t&,
                    const double&,
                    const double&);
};

class FunctionWeapon : public Function
{
protected:
    const double _damage;

public:
    FunctionWeapon(const double&,
                   const double&,
                   const uint32_t&,
                   const double&);
};

class FunctionFood : public Function
{
protected:
    const double _restores;

public:
    FunctionFood(const double&,
                 const double&,
                 const uint32_t&,
                 const double&);
};

class FunctionEmpty : public Function
{
public:
    FunctionEmpty(const double&, const double&, const uint32_t&);
};

#endif

