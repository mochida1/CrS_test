/*
	3) A estratégia Percentage of Volume (POV) é utilizada quando o cliente quer executar uma quantidade que acompanhe um determinado percentual do volume negociado de um papel no mercado. Por exemplo, o cliente quer fazer 10% do volume do papel PETR4. Ao serem negociadas 1000 ações no total do papel no mercado, é esperado que 100 ações desse total tenham sido executadas por essa estratégia. Faça uma função que, com a porcentagem e o número de ações negociadas, ela retorne o valor de ações que devem ser negociadas pela estratégia POV para atingir o volume esperado. 

	Considere:  
	decimal funcaoRetornaQuantidade (decimal porcentagem, int totalNegociado) 
	funcaoRetornaQuantidade (0.1, 900) = 100.

	Ou seja, quando a função receber um totalNegociado no mercado de 900 ações e o percentual definido pelo cliente for 10%, a estratégia terá de executar 100 ações para totalizar 1000 ações negociadas no mercado.  Implemente o corpo dessa função.
*/

#include "pov_calculator.hpp"

// assert params are valid. Better to crash than to make mistakes with money
static void check_params(long double porcentagem, int totalnegociado){
	if (porcentagem < 0 || totalnegociado < 0)
		throw (std::runtime_error("Critical error(funcaoRetornaQuantidade): negative parameter received."));
	else if (porcentagem > 1)
		throw (std::runtime_error("Critical error(funcaoRetornaQuantidade): porcentagem over 100."));
	else if (porcentagem == 1)
		throw (std::runtime_error("Critical error(funcaoRetornaQuantidade): let's not divide by 0, please."));
	else if (totalnegociado == 0)
		throw (std::runtime_error("Critical error(funcaoRetornaQuantidade): totalnegociado is 0."));
}

// Please note that it is widely known that using floating points for calculations often incurr errors.
// Using a long double instead of using a custom fixed point class data type in order to save time.
long double funcaoRetornaQuantidade (long double porcentagem, int totalNegociado) {
	check_params(porcentagem, totalNegociado);
	double ret = (porcentagem / (1 - porcentagem)) * totalNegociado;
	return ret;
}