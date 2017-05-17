#include "function.hpp"
#include "item.hpp"


Function::Function(const double& durability,
                   const double& weight,
                   const uint32_t& size)
: _durability(durability), _weight(weight), _size(size)
{}

Function::~Function() {}

StorageFunction::StorageFunction(const double& durability,
                                 const double& weight,
                                 const uint32_t& size,
                                 const double& MAX_ITEMS,
                                 const std::vector<Item>& inventory)
: Function(durability, weight, size),
  _inventory(inventory),
  _MAX_ITEMS(MAX_ITEMS)
{}

StorageFunction::StorageFunction(const double& durability,
                                 const double& weight,
                                 const uint32_t& size,
                                 const double& MAX_ITEMS,
                                 std::vector<Item>&& inventory)
: Function(durability, weight, size),
  _inventory(std::move(inventory)),
  _MAX_ITEMS(MAX_ITEMS)
{}

ApparelFunction::ApparelFunction(const double& durability,
                                 const double& weight,
                                 const uint32_t& size,
                                 const double& strength,
                                 const double& defense)
: Function(durability, weight, size),
  _strength(strength),
  _defense(defense)
{}

WeaponFunction::WeaponFunction(const double& durability,
                               const double& weight,
                               const uint32_t& size,
                               const double& damage)
: Function(durability, weight, size),
  _damage(damage)
{}

FoodFunction::FoodFunction(const double& durability,
                           const double& weight,
                           const uint32_t& size,
                           const double& restores)
: Function(durability, weight, size),
  _restores(restores)
{}
