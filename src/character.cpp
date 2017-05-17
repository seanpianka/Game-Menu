#include <vector>
#include <memory>
#include "character.hpp"


Character::Character(const Role& role, const std::vector<Item>& inventory)
: _role(role),
 _equipped(nullptr),
 _inventory(inventory)
{
    set_role_attributes();
}

Character::Character(const Role& role, std::vector<Item>&& inventory)
: _role(role),
 _equipped(nullptr),
 _inventory(std::move(inventory))
{
    set_role_attributes();
}

Character::~Character() {}

void Character::set_role_attributes()
{
    _strength = _role.get_strength();
    _defense = _role.get_defense();
    _health = _role.get_health();
}

bool Character::is_alive()
{
    return _health > 0;
}

std::shared_ptr<Item> Character::get_equipped_item()
{
    return _equipped;
}
