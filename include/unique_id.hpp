#ifndef __MINIA__UNIQUEID__HPP__
#define __MINIA__UNIQUEID__HPP__

#include <string>


class UniqueId
{
protected:
    UniqueId() { _id = _id_count++; }

    static uint32_t _id_count;
    uint32_t _id;
    std::string _family;
    std::string _title;

public:
    uint32_t get_id() { return _id; }
};

uint32_t UniqueId::_id_count = 0;

#endif
