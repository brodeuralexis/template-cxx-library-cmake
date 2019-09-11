#include <boost/test/unit_test.hpp>

#include <my_library/my_library.hh>

BOOST_AUTO_TEST_SUITE(MyLibraryTest)

BOOST_AUTO_TEST_CASE(TestIfGreetReturnsAGreeting)
{
    BOOST_CHECK_EQUAL(my_library::greet(), "Hello from my_library::greet()!");
}

BOOST_AUTO_TEST_SUITE_END()
