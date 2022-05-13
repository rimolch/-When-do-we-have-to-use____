
//
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; 25 <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
   ll n;
   cin>>n;
   if(isPrime(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
         cout<<"NO "<<endl;
    }
}
