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

	///Function for addition
	///Need to run through GoogleTest.
	int addition(int x, int y);

	///Function for addition
	///Need to run through GoogleTest.
	unsigned int minus(unsigned int x, unsigned int y);

	///Set the right side of the equation.
	void setRightSide(float rSide);

	///Function for division.
	///Need to run through GoogleTest.
	float operator/(float l_Side);

	///Function for division.
	///Need to run through GoogleTest.
	float operator*(float l_Side);
	
	///Function to calculate dot product of two vectors
	///Need to run through GoogleTest.
	int dot_product(int vector_a[], int vector_b[]);

	///Output a map of strings.
	///Need to run through GoogleTest.
	std::map<int, std::string> outputValues(int values[]);

	/// Check for primes.
	///Need to run through GoogleTest.
	bool checkPrime(int n);

};
