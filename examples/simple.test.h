#ifndef __SIMPLE_TEST_H_
#define __SIMPLE_TEST_H_

#include "../src/EmeraldsAssert.h"

module(simple, {
  describe("simple assersions", {
    it("should succeed", {
      assert_that(1 is 1);
      assert_that(42 is 42);
    });

    assert_that(1 isnot 2);
    assert_that(41 is 42);
  });
})

#endif
