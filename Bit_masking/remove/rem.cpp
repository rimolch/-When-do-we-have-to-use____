#include<bits/stdc++.h>

using namespace std;

#define ll       long long
#define scl(n)   scanf("%lld", &n)
#define scc(c)	 scanf(" %c", &c);
#define fr(i,n)  for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)
#define pfl(x)   printf("%lld\n",x)
#define pb       push_back
#define l(s)     s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());

void display(int subset)
{
    for(int i=0;i<=31;i++)
    {
        if(subset&(1<<i))
        {
            cout<<i+1<<" ";
        }
    }
}
void remove(int& subset,int x)
{
    subset = (subset^(1<<(x-1)));
}
/*void add(int& subset,int x)
{
    subset = (subset^(1<<(x-1)));
}*/
int main()
{
    int set;
    cin>>set;
    remove(set,4);
    display(set);
    return 0;
}
