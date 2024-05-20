/*
** Credite Suisse test - Henrique Mochida Peixoto
** this file contains unit tests for the functions fibonacci() and fibonacci_skip0()
** ATTENTION! Overflows are now contemplated in this test as they are considered "undefined behaviour" in C++. Please note that higher input values will invaraibly result in stack overflows.
*/
#include "test_main.hpp"

/* ################### fibbonacci ################### */
TEST(gtest_fibbonacci, fib_0_eq_0) {
	int64_t param = 0;
	int64_t res = fibonacci(param);
	int64_t exp = 0;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_1_eq_1) {
	int64_t param = 1;
	int64_t res = fibonacci(param);
	int64_t exp = 1;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_2_eq_1) {
	int64_t param = 2;
	int64_t res = fibonacci(param);
	int64_t exp = 1;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_3_eq_2) {
	int64_t param = 3;
	int64_t res = fibonacci(param);
	int64_t exp = 2;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_5_eq_5) {
	int64_t param = 5;
	int64_t res = fibonacci(param);
	int64_t exp = 5;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_19_eq_4181) {
	int64_t param = 19;
	int64_t res = fibonacci(param);
	int64_t exp = 4181;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_42_eq_267914296) {
	int64_t param = 42;
	int64_t res = fibonacci(param);
	int64_t exp = 267914296;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci, fib_minus1_eq_runtime_error) {
	int64_t param = -1;
	EXPECT_THROW(fibonacci(param) , std::runtime_error);
}

/* ################### fibonacci_skip0 ################### */
TEST(gtest_fibonacci_skip0, fib_0_eq_1) {
	int64_t param = 0;
	int64_t res = fibonacci_skip0(param);
	int64_t exp = 1;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci_skip0, fib_1_eq_1) {
	int64_t param = 1;
	int64_t res = fibonacci_skip0(param);
	int64_t exp = 1;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci_skip0, fib_2_eq_2) {
	int64_t param = 2;
	int64_t res = fibonacci_skip0(param);
	int64_t exp = 2;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci_skip0, fib_4_eq_5) {
	int64_t param = 4;
	int64_t res = fibonacci_skip0(param);
	int64_t exp = 5;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci_skip0, fib_18_eq_4181) {
	int64_t param = 18;
	int64_t res = fibonacci_skip0(param);
	int64_t exp = 4181;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci_skip0, fib_41_eq_267914296) {
	int64_t param = 41;
	int64_t res = fibonacci_skip0(param);
	int64_t exp = 267914296;
	EXPECT_EQ(res, exp);
}

TEST(gtest_fibbonacci_skip0, fib_minus1_eq_runtime_error) {
	int64_t param = -1;
	EXPECT_THROW(fibonacci_skip0(param) , std::runtime_error);
}