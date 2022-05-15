///factorial of combination formula
#include<bits/stdc++.h>
#define ll long long int
const int N =1e5+7;
#define M 1e9+7
using namespace std;
int fact(int n)
 {
   int fact[n+1];
   int i;
   fact[0] = 1;
   fact[1] = 1;
   for (i = 2; i <= n; i++)
   {
       fact[i] = i*fact[i-1];
   }
   return fact[n];
}
int main()
{
    ll n,r;
    cin>>n>>r;
    int ans = fact(n);
    int den = (fact(n-r)*fact(r));
    cout<<ans/den<<endl;
    return 0;
}
