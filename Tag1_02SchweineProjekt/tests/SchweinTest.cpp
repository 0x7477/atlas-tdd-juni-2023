#include "SchweinTest.hpp"
#include <stdexcept>
#include <limits.h>

TEST_F(SchweinTest, construct_with_legal_name__InitializesNameCorrectly)
{
    const std::string legal_name{"Peter"};

    Schwein objectUnderTest{legal_name};

    EXPECT_EQ(objectUnderTest.getName(), legal_name);
    EXPECT_EQ(objectUnderTest.getGewicht(), 0);
}

TEST_F(SchweinTest, construct_with_illegal_name__ThrowsIllegalArgumentException)
{
    const std::string illegal_name{"Elsa"};

    EXPECT_THROW(Schwein{illegal_name}, std::invalid_argument);
}

TEST_F(SchweinTest, constructor__default__ObjectIsCorrectlyIntitialized)
{
    const std::string default_name{"Nobody"};
    EXPECT_EQ(objectUnderTest.getName(), default_name);
    EXPECT_EQ(objectUnderTest.getGewicht(), 0);
}

TEST_F(SchweinTest, set_name__illegalName__expectThrow)
{
    // Arrange
    const std::string illegal_name{"Elsa"};
    EXPECT_THROW(objectUnderTest.setName(illegal_name), std::invalid_argument);
}

TEST_F(SchweinTest, fuettern__startgewicht0__Expect1)
{
    // Arrange
    objectUnderTest.fuettern();

    EXPECT_EQ(objectUnderTest.getGewicht(), 1);
}

TEST_F(SchweinTest, fuettern__IntOverflow__ExpectNegativeMAX)
{
    // for(std::size_t i = 0; i < INT_MAX; i++)
    //     objectUnderTest.fuettern();

    // EXPECT_EQ(objectUnderTest.getGewicht(), INT_MIN);
}
