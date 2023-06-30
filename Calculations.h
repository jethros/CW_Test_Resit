#pragma once
#include <iostream>
#include<vector>
#include<map>
class Calculations {
private:
	float l_Side, r_Side, divisor = 0.f;
	const int i_size = 3;
	std::map<int, std::string> m_map;
public:
	std::string testString[2] = { "", " "};
	/// <summary>
	/// Default comnstructor for the Calculations class.
	/// </summary>
	Calculations() {};

	///Function for division.
	///Need to run through GoogleTest.
	float operator/(float l_Side);

	///Function for division.
	///Need to run through GoogleTest.
	float operator*(float l_Side);
	
	///Function to calculate dot product of two vectors
	///Need to run through GoogleTest.
	int dot_product(int vector_a[], int vector_b[]);

	/// Check for primes.
	///Need to run through GoogleTest.
	bool checkPrime(signed int n);

	///Find a Fibonacci number
	///Need to run through GoogleTest.
	int findFib(signed int n);

};
