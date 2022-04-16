#include "config_creation.h"
#include <gtest/gtest.h>


struct debug_printer {
  template <typename T>
  void operator()(const char * name, const T & value) {
    std::cerr << name << ": " << value << std::endl;
  }
};

void debug_print(const my_type & my_struct) {
  visit_struct::for_each(my_struct, debug_printer{});
}
TEST(MultiplyTests, TestIntegerOne_One)
{
	my_type t;
	debug_print(t);
	ASSERT_FALSE(true);
	
    const auto expected = 1;
    const auto actual = multiply(1, 1);
    ASSERT_EQ(expected, actual);
}
