/*
** Credite Suisse test - Henrique Mochida Peixoto
** this file contains unit tests for the function isOdd()
** ATTENTION! Overflows are now contemplated in this test as they are considered "undefined behaviour" in C++
*/
#include "test_main.hpp"

/* ################### bool ################### */
// this works since false and true are interpreted as 0 and 1 integers
TEST(gtest_isOdd_bool, bool_false_eq_false) {
	bool num = false;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_bool, bool_true_eq_true) { 
	bool num = false;
	EXPECT_EQ( isOdd(num), false);
}

/* ################### int8 ################### */
TEST(gtest_isOdd_INT8, int8_zero_eq_false) {
	int8_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT8, int8_one_eq_true) {
	int8_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT8, int8_negOne_eq_true) {
	int8_t num = -1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT8, int8_INT_MIN_eq_false) { // this is system defined. Better to know whether it changes
	int8_t num = INT8_MIN;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT8, int8_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	int8_t num = INT8_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### int16 ################### */
TEST(gtest_isOdd_INT16, int16_zero_eq_false) {
	int16_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT16, int16_one_eq_true) {
	int16_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT16, int16_negOne_eq_true) {
	int16_t num = -1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT16, int16_INT_MIN_eq_false) { // this is system defined. Better to know whether it changes
	int16_t num = INT16_MIN;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT16, int16_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	int16_t num = INT16_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### int32 ################### */
TEST(gtest_isOdd_INT32, int32_zero_eq_false) {
	int32_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT32, int32_one_eq_true) {
	int32_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT32, int32_negOne_eq_true) {
	int32_t num = -1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT32, int32_INT_MIN_eq_false) { // this is system defined. Better to know whether it changes
	int32_t num = INT32_MIN;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT32, int32_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	int32_t num = INT32_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### int64 ################### */
TEST(gtest_isOdd_INT64, int64_zero_eq_false) {
	int64_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT64, int64_one_eq_true) {
	int64_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT64, int64_negOne_eq_true) {
	int64_t num = -1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_INT64, int64_INT_MIN_eq_false) { // this is system defined. Better to know whether it changes
	int64_t num = INT64_MIN;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_INT64, int64_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	int64_t num = INT64_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### uint8 ################### */
TEST(gtest_isOdd_UINT8, uint8_zero_eq_false) {
	uint8_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_UINT8, uint8_one_eq_true) {
	uint8_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_UINT8, uint8_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	uint8_t num = UINT8_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### uint16 ################### */
TEST(gtest_isOdd_UINT16, uint16_zero_eq_false) {
	uint16_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_UINT16, uint16_one_eq_true) {
	uint16_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_UINT16, uint16_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	uint8_t num = UINT8_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### uint32 ################### */
TEST(gtest_isOdd_UINT32, uint32_zero_eq_false) {
	uint32_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_UINT32, uint32_one_eq_true) {
	uint32_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_UINT32, uint32_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	uint8_t num = UINT8_MAX;
	EXPECT_EQ( isOdd(num), true);
}

/* ################### uint64 ################### */
TEST(gtest_isOdd_UINT64, uint64_zero_eq_false) {
	uint64_t num = 0;
	EXPECT_EQ( isOdd(num), false);
}

TEST(gtest_isOdd_UINT64, uint64_one_eq_true) {
	uint64_t num = 1;
	EXPECT_EQ( isOdd(num), true);
}

TEST(gtest_isOdd_UINT64, uint64_INT_MAX_eq_true) { // this is system defined. Better to know whether it changes
	uint8_t num = UINT8_MAX;
	EXPECT_EQ( isOdd(num), true);
}


/* 
** !!! The following are not considered integers and therefore cannot be odd or even !!!
** While it is possible to only use integer values, this would slow down the runtime considerably.
*/
/* ################### double ################### */
// TEST(gtest_isOdd_DOUBLE, double_zero_eq_false) {
// 	double num = 0;
// 	EXPECT_EQ( isOdd(num), false);
// }

/* ################### float ################### */
// TEST(gtest_isOdd_FLOAT, float_zero_eq_false) {
// 	float num = 0;
// 	EXPECT_EQ( isOdd(num), false);
// }