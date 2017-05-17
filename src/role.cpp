#include "role.hpp"

Role::Role(const double& strength,
           const double& health,
           const double& defense)
: _strength(strength),
  _health(health),
  _defense(defense)
{
}

double Role::get_strength() const
{
    return _strength;
}

double Role::get_health() const
{
    return _health;
}

double Role::get_defense() const
{
    return _defense;
}

Role::Role(const Role&) {}
void Role::operator=(const Role&) {}
