#ifndef __MINIA__ROLE__HPP__
#define __MINIA__ROLE__HPP__

#include "unique_id.hpp"
#include "entity.hpp"


class Role : public UniqueId
{
    friend class Entity;

protected:
    double _strength;
    double _health;
    double _defense;

public:
    Role(const double&, const double&, const double&);
};

#endif
