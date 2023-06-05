#include "SchweinTest.hpp"
#include <stdexcept>
#include <limits.h>

TEST_F(SchweinTest, construct_with_legal_name__InitializesNameCorrectly)
{
    const int expect_default_weight{10};
    const std::string legal_name{"Peter"};

    Schwein objectUnderTest{legal_name};

    EXPECT_EQ(objectUnderTest.getName(), legal_name);
    EXPECT_EQ(objectUnderTest.getGewicht(), expect_default_weight);
}

TEST_F(SchweinTest, construct_with_illegal_name__ThrowsIllegalArgumentException)
{
    const std::string illegal_name{"Elsa"};

    EXPECT_THROW(Schwein{illegal_name}, std::invalid_argument);
}

TEST_F(SchweinTest, constructor__default__ObjectIsCorrectlyIntitialized)
{
    const std::string default_name{"Nobody"};
    const int expect_default_weight{10};
    EXPECT_EQ(objectUnderTest.getName(), default_name);
    EXPECT_EQ(objectUnderTest.getGewicht(), expect_default_weight);
}

TEST_F(SchweinTest, set_name__illegalName__expectThrowsInvalidArgumentException)
{
    // Arrange
    const std::string illegal_name{"Elsa"};
    EXPECT_THROW(objectUnderTest.setName(illegal_name), std::invalid_argument);
}

TEST_F(SchweinTest, fuettern__happy_day__ExpectWeightIncreased)
{

    // Arrange
    const int expected_weight{11}
    // Act
    objectUnderTest.fuettern();

    EXPECT_EQ(objectUnderTest.getGewicht(), expected_weight);
}

TEST_F(SchweinTest, fuettern__IntOverflow__ExpectNegativeMAX)
{
    // for(std::size_t i = 0; i < INT_MAX; i++)
    //     objectUnderTest.fuettern();

    // EXPECT_EQ(objectUnderTest.getGewicht(), INT_MIN);
}
