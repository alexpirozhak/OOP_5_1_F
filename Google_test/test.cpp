#include "gtest/gtest.h"
#include "../Bus.h"

TEST(BusTestSuite, BusTest)
{
    Bus b;
    b.setSeats(5);
    ASSERT_EQ(b.getSeats(), 5);
}
