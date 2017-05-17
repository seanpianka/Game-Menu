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
    Character(const Role&, std::vector<Item>&&);
    ~Character();
    bool is_alive();
    std::shared_ptr<Item> get_equipped_item();

private:
    void set_role_attributes();

    const Role& _role;
    double _strength;
    double _defense;
    double _health;
    std::shared_ptr<Item> _equipped;
    std::vector<Item> _inventory;
};

#endif
