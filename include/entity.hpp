#ifndef __MINIA__ENTITY__HPP__
#define __MINIA__ENTITY__HPP__

#include <SFML/Graphics.hpp>

class Entity
{
protected:
    sf::Vector3f _position;
    sf::Sprite _sprite;
    sf::Texture _texture;
    double _x_vel, _y_vel, _z_vel;

public:
    Entity(const int32_t& x_pos = 0,
           const int32_t& y_pos = 0,
           const int32_t& z_pos = 0);
    virtual ~Entity();

    sf::Sprite get_sprite();
    sf::Texture get_texture();
    sf::Vector3f get_position();
    void move(const double& time_elapsed = 0);
    void set_velocity(const int32_t& x_vel = 0,
                      const int32_t& y_vel = 0,
                      const int32_t& z_vel = 0);
    void set_position(const int32_t& x_pos = 0,
                      const int32_t& y_pos = 0,
                      const int32_t& z_pos = 0);
};

#endif
