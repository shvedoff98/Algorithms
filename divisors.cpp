/* Simple program to check
 * all natural divisors of the number n */
// First example searches all divisors with O(n)
// time complexity
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

void diviser_check_O_sqrt_n(long long int n)
{
    vector <long> div;
    for (long i=2; i<=sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            if ( n / i == i )
            {
                div.push_back(i);
            } else {
                div.push_back(i);
                div.push_back(n/i);
            }
        }
    }
    sort(div.begin(),div.end());
    cout << "O(sqrt(n)): ";
    for (auto x : div){cout << x << " ";}
    cout << "\n";
}

void diviser_check_O_n(long long int n)
{
    vector <long> div;
    for (long i=2; i<n; ++i)
    {
        if (n % i == 0)
        {
            div.push_back(i);
        }
    }
    
    cout << "O(n): ";
    for (auto x : div){cout << x << " ";}
    cout << "\n";
}

int main(int argc, char* argv[])
{
    diviser_check_O_sqrt_n(24);
    diviser_check_O_n(24);
    return 0;
}
