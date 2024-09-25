/**
 * A very minimal assertion library written in pure C for testing pure C.
 *
 * Copyright (C) 2024 oblivious
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef __EMERALDS_ASSERT_H_
#define __EMERALDS_ASSERT_H_

#include <stdio.h> /* printf */

#define is    ==
#define isnot !=

#define module(suite_name, ...) \
  static void suite_name(void) { __VA_ARGS__ }

#define describe(name, ...) \
  do {                      \
    __VA_ARGS__             \
  } while(0)

#define it(proc_name, ...) \
  do {                     \
    __VA_ARGS__            \
  } while(0)

#define assert_that(test)                                                 \
  do {                                                                    \
    if((test)) {                                                          \
      printf(                                                             \
        "[\033[38;5;78m%s\033[0m] - %s:%d:\n", #test, __FILE__, __LINE__  \
      );                                                                  \
    } else {                                                              \
      printf(                                                             \
        "[\033[38;5;203m%s\033[0m] - %s:%d:\n", #test, __FILE__, __LINE__ \
      );                                                                  \
    }                                                                     \
  } while(0)

#define cspec_run_suite(type_of_tests, ...) \
  do {                                      \
    printf("\n");                           \
    __VA_ARGS__                             \
  } while(0)

#endif
