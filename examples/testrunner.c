#include "../src/EmeraldsAssert.h"
#include "simple.test.h"

int main(void) {
  cspec_run_suite("all", { simple(); });
  assert_that(1 is 2);
  assert_that(11 isnot 11);
}
