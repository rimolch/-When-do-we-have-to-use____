/// C++ program to find modular inverse of a under modulo m
/// This program works only if m is prime.
#include <iostream>
#define ll long long int
using namespace std;

/// To find GCD of a and b
int gcd(int a, int b);

/// To compute x raised to power y under modulo m
int BinaryExIter(int x, unsigned int y, unsigned int m);

/// Function to find modular inverse of a under modulo m
/// Assumption: m is prime
void modInverse(int a, int m)
{
    int g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        /// If a and m are relatively prime, then modulo
        /// inverse is a^(m-2) mode m
        cout << "Modular multiplicative inverse is "
             << BinaryExIter(a, m - 2, m);
    }
}
/// To compute x^y under modulo m
int BinaryExIter(int a,unsigned int b,unsigned int m)
{
    int res =1;
    while(b)
    {
        if(b&1)
        {
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b=(b/2)%m;
    }
    return res;
}
///Function to return gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

/// Driver code
int main()
{
    ll a,b;
    cin>>a>>b;
    modInverse(a, b);
    return 0;
}
