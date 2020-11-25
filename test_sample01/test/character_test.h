#pragma once

#include <gtest/gtest.h>

#include "character.h"

class CharacterTest : public ::testing::Test
{
 protected:
    void SetUp() override;
    void TearDown() override;

 protected:
    CharacterPtr _character;
};
