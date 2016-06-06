// FindAllPrimes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

vector<int> getAllPrimes(int A)
{
    vector<int> primes(A);
    // set all numbers as prime
    for (int i = 0; i < A; i++)
    {
        primes[i] = 1;
    }

    int N = sqrt(A);
    vector<int> result;
    for (int i = 2; i <= N; i++)
    {
        // strike multiples of the number as non-primes
        for (int j = 2; (i * j) < A; j++)
        {
            primes[i * j] = 0;
        }
    }

    for (int i = 2; i < A; i++)
    {
        if (primes[i] == 1)
        {
            result.push_back(i);
        }
    }
    return result;
}


int main()
{
    for (auto e : getAllPrimes(10))
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}

