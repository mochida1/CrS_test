#pragma once
#ifndef FIB_HPP
# define FIB_HPP

#include <stdexcept>

// NOTE: it is actually known that Fibonacci sequence starts at 0. Therefore f(0) = 0.
// this function does not behaves according to the exercise description.
constexpr int64_t fibonacci(int64_t n) {
	if (n < 0)
		throw (std::runtime_error("Critical Error: fibonacci() must receive positive integers."));
	if(n <= 1)
		return n;
	else
		return(fibonacci(n-1) + fibonacci(n-2));
}

int64_t fibonacci_skip0(int64_t n);

#endif // FIB_HPP