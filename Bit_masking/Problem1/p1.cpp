/*

let there be N workers and n jobs. Any worker can be assigned to perform any job,
incurring some cost that may vary depending on the work-job assignment.It is required to perform all jobs 
by assigning exactly one worker to each job and exactly one job to each agent 
in such a way that total cost of the assignment is minimized.

Sample Input

4
9 2 7 8
6 4 3 7
5 8 1 8
7 6 9 4

Sample output

13
*/

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

int cost[21][21];
int dp[21][1<<21];
int solve(int i,int mask,int& n)
{
    if(i==n)
        return 0;
    if(dp[i][mask]!=-1)
        return dp[i][mask];
    int ans =INT_MAX;
    for(int j=0;j<n;j++)
    {
        if(mask&(1<<j))
           ans=min(ans,cost[j][i]+solve(i+1,(mask^(1<<j)),n));
    }
    return dp[i][mask]=ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       memset(dp,-1,sizeof dp);/// all elements of dp are -1
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>cost[i][j];
            }
        }
        cout<<solve(0,(1<<n)-1,n)<<endl;
    }
    return 0;
}
