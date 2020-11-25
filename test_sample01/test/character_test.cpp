#include "character_test.h"

void CharacterTest::SetUp()
{
    _character = Character::create(1, 100);
}

void CharacterTest::TearDown()
{}

TEST_F(CharacterTest, GetID)
{
    EXPECT_EQ(_character->getID(), 1);
}

TEST_F(CharacterTest, GetHP)
{
    EXPECT_EQ(_character->getHP(), 100);
}

TEST_F(CharacterTest, ReduceHP)
{
    EXPECT_EQ(_character->getHP(), 100);
    _character->reduceHP(10);
    EXPECT_EQ(_character->getHP(), 90);
}
