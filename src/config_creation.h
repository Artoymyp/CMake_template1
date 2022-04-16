#pragma once

#include "visit_struct/visit_struct_intrusive.hpp"

struct my_type {
  BEGIN_VISITABLES(my_type);
  VISITABLE(int, a);
  VISITABLE(float, b);
  END_VISITABLES;
};

int multiply(int a, int b);