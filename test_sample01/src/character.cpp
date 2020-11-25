#include "character.h"

const CharacterPtr Character::create(const int32_t id, const int32_t hp)
{
    return std::make_shared<Character>(id, hp);
}

Character::Character(const int32_t id, const int32_t hp)
: _id(id)
, _hp(hp)
{}

int32_t Character::reduceHP(const int32_t sub)
{
    _hp -= sub;
    if (_hp < 0) {
        _hp = 0;
    }

    return _hp;
}
