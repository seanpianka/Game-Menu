#include <vector>
#include <memory>
#include "character.hpp"


Character::Character(const Role& role, const std::vector<Item>& inventory)
: _role(role),
 _inventory(inventory)

{
    init();
}

Character::Character(const Role& role, std::vector<Item>&& inventory)
: _role(role),
 _inventory(std::move(inventory))
{
    init();
}

Character::~Character() {}

void Character::init()
{
    _strength = _role.get_strength();
    _defense = _role.get_defense();
    _health = _role.get_health();
    _equipped = nullptr;
    _attack_player_on_sight = false;
}

bool Character::is_alive()
{
    return _health > 0;
}

std::shared_ptr<Item> Character::get_equipped_item()
{
    return _equipped;
}
