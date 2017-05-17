#ifndef __MINIA__ROLE__HPP__
#define __MINIA__ROLE__HPP__

#include "unique_id.hpp"


class Role : public UniqueId
{
protected:
    Role(const double&, const double&, const double&);

    double _strength;
    double _health;
    double _defense;

public:
    virtual ~Role() = 0;
    Role(Role const&);
    void operator=(Role const&);
};

#endif
