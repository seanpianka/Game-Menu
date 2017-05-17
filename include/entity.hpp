#ifndef __MINIA__ENTITY__HPP__
#define __MINIA__ENTITY__HPP__

#include <SFML/Graphics.hpp>

class Entity
{
protected:
    Entity(const int32_t& x_pos = 0,
           const int32_t& y_pos = 0,
           const int32_t& z_pos = 0);

    sf::Vector2f _position;
    sf::Sprite _sprite;
    sf::Texture _texture;

    double _x_vel, _y_vel, _z_vel;

    bool attack_player_on_sight;

public:
    virtual ~Entity() = 0;

    virtual sf::Sprite get_sprite();
    virtual sf::Texture get_texture();
    virtual sf::Vector2f get_position();
    void set_velocity(const int32_t& x_vel = 0,
                      const int32_t& y_vel = 0,
                      const int32_t& z_vel = 0);
    void move(const double& time_elapsed = 0);
    void set_position(const int32_t& x_pos = 0,
                      const int32_t& y_pos = 0,
                      const int32_t& z_pos = 0);
};

#endif
