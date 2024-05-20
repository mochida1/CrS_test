/*
** Credite Suisse test - Henrique Mochida Peixoto
** this file contains unit tests for the functions fibonacci() and fibonacci_skip0()
** ATTENTION! Overflows are now contemplated in this test as they are considered "undefined behaviour" in C++. Please note that higher input values will invaraibly result in stack overflows.
*/
#include "test_main.hpp"

/* ################### POV_calculator ################### */
TEST(gtest_pov_calc, params0dot1__900_eq_100) {
	double porcentagem = 0.1;
	int totalNegociado = 900;
	double exp = 100;
	double res;
	try{
		res = funcaoRetornaQuantidade(porcentagem, totalNegociado);
	}
	catch (const std::runtime_error &e){
		std::cerr << e.what() << std::endl;
	}
	EXPECT_EQ(res, exp);
}

TEST(gtest_pov_calc, params0dot2__800_eq_200) {
	long double porcentagem = 0.2;
	int totalNegociado = 800;
	long double exp = 200;
	long double res;
	try{
		res = funcaoRetornaQuantidade(porcentagem, totalNegociado);
	}
	catch (const std::runtime_error &e){
		std::cerr << e.what() << std::endl;
	}
	EXPECT_EQ(res, exp);
}

TEST(gtest_pov_calc, params0dot05__2000_eq_105dot263157894736849585) {

	long double porcentagem = 0.05;
	int totalNegociado = 2000;
	long double exp = 105.263157894736849585;
	long double res;
	try{
		res = funcaoRetornaQuantidade(porcentagem, totalNegociado);
	}
	catch (const std::runtime_error &e){
		std::cerr << e.what() << std::endl;
	}
	// std::cerr << std::setprecision(std::numeric_limits<long double>::max_digits10) << "exp: [" << exp << "] res: [" << res << "]" << std::endl;
	EXPECT_EQ(res, exp);
}

TEST(gtest_pov_calc, params0dot15__500_eq_88dot235294117647058823529411765) {

	long double porcentagem = 0.15;
	int totalNegociado = 500;
	long double exp = 88.235294117647058823529411765;
	long double res;
	try{
		res = funcaoRetornaQuantidade(porcentagem, totalNegociado);
	}
	catch (const std::runtime_error &e){
		std::cerr << e.what() << std::endl;
	}
	// std::cerr << std::setprecision(std::numeric_limits<long double>::max_digits10) << "exp: [" << exp << "] res: [" << res << "]" << std::endl;
	EXPECT_EQ(res, exp);
}

TEST(gtest_pov_calc, params0dot25__1000_eq_333dot33333333333333333333333333) {

	long double porcentagem = 0.25;
	int totalNegociado = 1000;
	long double exp = 333.33333333333333333333333333;
	long double res;
	try{
		res = funcaoRetornaQuantidade(porcentagem, totalNegociado);
	}
	catch (const std::runtime_error &e){
		std::cerr << e.what() << std::endl;
	}
	// std::cerr << std::setprecision(std::numeric_limits<long double>::max_digits10) << "exp: [" << exp << "] res: [" << res << "]" << std::endl;
	EXPECT_EQ(res, exp);
}

TEST(gtest_pov_calc, params_minusOne__1000_eq_runtime_error) {

	long double porcentagem = -1;
	int totalNegociado = 1000;
	EXPECT_THROW(funcaoRetornaQuantidade(porcentagem, totalNegociado), std::runtime_error);
}

TEST(gtest_pov_calc, params_1__1000_eq_runtime_error) {

	long double porcentagem = 1;
	int totalNegociado = 1000;
	EXPECT_THROW(funcaoRetornaQuantidade(porcentagem, totalNegociado), std::runtime_error);
}

TEST(gtest_pov_calc, params_2__1000_eq_runtime_error) {

	long double porcentagem = 2;
	int totalNegociado = 1000;
	EXPECT_THROW(funcaoRetornaQuantidade(porcentagem, totalNegociado), std::runtime_error);
}

TEST(gtest_pov_calc, params_0dot2__minus1000_eq_runtime_error) {

	long double porcentagem = 0.2;
	int totalNegociado = -1000;
	EXPECT_THROW(funcaoRetornaQuantidade(porcentagem, totalNegociado), std::runtime_error);
}

TEST(gtest_pov_calc, params_0dot2__0_eq_runtime_error) {

	long double porcentagem = 0.2;
	int totalNegociado = 0;
	EXPECT_THROW(funcaoRetornaQuantidade(porcentagem, totalNegociado), std::runtime_error);
}
