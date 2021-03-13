/*C++ program to print all primes 
 smaller than or equal to
 n using Sieve of Eratosthenes*/

#include <iostream>
#include <cstring>
using namespace std;

void my_func(int n)
{
    /* Create a boolean array 
     "prime[0..n]" and initialize
     all entries it as true. 
     A value in prime[i] will
     finally be false if i is 
     Not a prime, else true.*/
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for(int p = 2; p*p <= n; p++)
    {
        // If prime[p] is not changed, 
        // then it is a prime
        if (prime[p] == true)
        {
            /* Update all multiples 
             of p greater than or
             equal to the square of it
             numbers which are multiple 
             of p and are less than p^2 
             are already been marked.*/
            for (int i = p*p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
        cout << "\n";
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            cout << p << " ";
    }
}

int main(int argc, char** argv)
{
    my_func(10);
    return 0;
}
