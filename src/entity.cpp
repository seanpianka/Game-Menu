#include "SFML/Graphics.hpp"
#include "entity.hpp"


Entity::Entity(const int32_t& x_pos,
               const int32_t& y_pos,
               const int32_t& z_pos)
{
    _x_vel = _y_vel = _z_vel = 0;
    _texture.loadFromFile("../assets/default_actor.png");
    _sprite.setTexture(_texture);
    set_position(x_pos, y_pos, z_pos);
}

Entity::~Entity() {}

sf::Sprite Entity::get_sprite()
{
    return _sprite;
}

sf::Texture Entity::get_texture()
{
    return _texture;
}

sf::Vector3f Entity::get_position()
{
    return _position;
}

void Entity::set_position(const int32_t& x_pos,
                          const int32_t& y_pos,
                          const int32_t& z_pos)
{
    _position = sf::Vector3f(x_pos, y_pos, z_pos);
    _sprite.setPosition(sf::Vector2f(_position.x, _position.y));
}

void Entity::set_velocity(const int32_t& x_vel,
                         const int32_t& y_vel,
                         const int32_t& z_vel)
{
    _x_vel = x_vel;
    _y_vel = y_vel;
    _z_vel = z_vel;
}

void Entity::move(const double& time_elapsed)
{
    _position.x += _x_vel * time_elapsed;
    _position.y += _y_vel * time_elapsed;
    _position.z += _z_vel * time_elapsed;
}
