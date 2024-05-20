/*
	2) Sabe-se que a sequência Fibonacci cresce da seguinte maneira: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
	Podemos dizer que:
	f(0) = 1
	f(1) = 1
	f(n) = f(n-1) + f(n-2)
	Implemente uma função utilizando recursividade, que recebe o parâmetro n e retorna o número da sequência de Fibonacci na posição n.
	Obs.: Não é necessário imprimir a sequência inteira.
*/

#include "fibonacci.hpp"

// this function skips the 0th index of the sequence.
int64_t fibonacci_skip0(int64_t n) {
	if (n < 0)
		throw (std::runtime_error("Critical Error: fibonacci() must receive positive integers."));
	n++;
	if(n <= 1)
		return n;
	else
		return(fibonacci(n-1) + fibonacci(n-2));
}