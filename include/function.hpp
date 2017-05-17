#ifndef __MINIA__FUNCTION__HPP__
#define __MINIA__FUNCTION__HPP__

#include <cstdint>
#include <vector>
#include "unique_id.hpp"

class Item;

class Function : public UniqueId
{
protected:
    double _durability;
    double _weight;
    uint32_t _size;

public:
    Function(const double&, const double&, const uint32_t&);
    virtual ~Function();
};

class StorageFunction : public Function
{
protected:
    std::vector<Item> _inventory;
    const double _MAX_ITEMS;

public:
    StorageFunction(const double&,
                    const double&,
                    const uint32_t&,
                    const double&,
                    const std::vector<Item>&);
    StorageFunction(const double&,
                    const double&,
                    const uint32_t&,
                    const double&,
                    std::vector<Item>&&);
};

class ApparelFunction : public Function
{
protected:
    const double _strength;
    const double _defense;

public:
    ApparelFunction(const double&,
                    const double&,
                    const uint32_t&,
                    const double&,
                    const double&);
};

class WeaponFunction : public Function
{
protected:
    const double _damage;

public:
    WeaponFunction(const double&,
                   const double&,
                   const uint32_t&,
                   const double&);
};

class FoodFunction : public Function
{
protected:
    const double _restores;

public:
    FoodFunction(const double&,
                 const double&,
                 const uint32_t&,
                 const double&);
};

#endif

