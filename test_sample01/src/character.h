#pragma once

#include <memory>

class Character;
using CharacterPtr = std::shared_ptr<Character>;

class Character
{
 public:
    static const CharacterPtr create(const int32_t id, const int32_t hp);

    Character(const int32_t id, const int32_t hp);

    int32_t getID() { return _id; }
    int32_t getHP() { return _hp; }
    int32_t reduceHP(const int32_t sub);

 private:
    int32_t _id;
    int32_t _hp;
};
