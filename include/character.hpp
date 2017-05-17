#ifndef __MINIA__CHARACTER__HPP__
#define __MINIA__CHARACTER__HPP__

#include <vector>
#include <SFML/Graphics.hpp>
#include "entity.hpp"
#include "role.hpp"
#include "item.hpp"


class Character : public Entity
{
public:
    Character(const Role&, const std::vector<Item>&);
    bool is_alive();

private:
    const Role& _role;
    double _strength;
    double _defense;
    double _health;
    std::vector<Item> inventory;
    Item& equipped;
};

#endif
