#include"Calculations.h"
#include <string>

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

int Calculations::findFib(signed int n)
{
    if (n <= 0) {
        std::cout << "Input error." << std::endl;
        return 0;
    }
    else {
        if (n <= 1)
            return n;
        return findFib(n - 1) + findFib(n - 2);
    }

}


bool Calculations::checkPrime(signed int n)
{
    /// Create a boolean array
    /// "prime[0..n]" and initialize
    /// all entries as true.
    std::vector<bool> prime( + 1);
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