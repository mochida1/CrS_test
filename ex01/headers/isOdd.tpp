#pragma once

/*
	1) Faça uma função que retorne TRUE, caso um determinado número for ímpar.
*/

// Please note that numbers over INT_MAX and INT_MIN(defined by system) will result in undefined behaviour
template <typename T> // no need to check if float or double as they'll generate compilation errors
constexpr bool isOdd(T number) {
	return number%2;
}