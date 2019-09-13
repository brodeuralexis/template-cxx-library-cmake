#include <gtest/gtest.h>

#include <my_library/my_library.hh>

TEST(MyLibraryTest, TestIfGreetReturnsAGreeting)
{
    EXPECT_EQ(my_library::greet(), "Hello from my_library::greet()");
}
