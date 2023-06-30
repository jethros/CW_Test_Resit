#include"Calculations.h"
#include <string>

///Function for addition
///Need to check.
int Calculations::addition(int x, int y) {
    return x + y;
}


///Function for addition
///Check to see if this works.
unsigned int Calculations::minus(unsigned int x, unsigned int y) {
    return x + y;
}

///Set the right side of the equation.
void Calculations::setRightSide(float rSide) {
    r_Side = rSide;
}

///Function for division.
///Need to check.
float Calculations::operator/(float l_Side) {
    return l_Side / r_Side;
}

///Function for division.
///Need to check.
float Calculations::operator*(float l_Side) {
    return l_Side * r_Side;
}

///Function to calculate dot product of two vectors
///Need to check. 
int Calculations::dot_product(int vector_a[], int vector_b[]) {
    int product = 0;
    for (int i = 0; i < i_size; i++)
        product = product + vector_a[i] * vector_b[i];
    return product;
}

///Return a map.
///Need to check the strings are correct.
std::map<int, std::string> Calculations::outputValues(int value[]) {
    for (int i = 0; i < (sizeof(value) / sizeof(*value)); i++) {
        std::string s_map = "Value: " + std::to_string(i);
        m_map.insert({ i,s_map });
        std::cout << "Value  " << i << " " << value[i] << std::endl;
    }

    return m_map;
}

bool Calculations::checkPrime(int n)
{
    /// Create a boolean array
    /// "prime[0..n]" and initialize
    /// all entries as true.
    std::vector<bool> prime(n + 1);
    std::fill(prime.begin(), prime.end(), n + 1);

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            /// Update all multiples of p greater than or
            /// equal to the square of it numbers which are multiple
            /// of p and are less than p^2 are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    //Return prime
    return prime[n];

}