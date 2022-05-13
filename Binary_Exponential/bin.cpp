//recursive method
//O(logn)
int BinaryEx(int a,int b)
{
    if(b==0) return 1; //base case

     ll res=BinaryEx(a,b/2);

    if(b&1)//if b is odd
    {
        return (a*((res*res)%M))%M;
    }
    else
    {
        return ((res*res)%M)%M;
    }
}
/*
int BinaryEx(int a,int b)
{
    if(b==0) return 1; //base case
    if(b&1)//if b is odd
    {
        return (a*(BinaryEx(a,b/2)%M)*(BinaryEx(a,b/2)%M))%M;
    }
    else
    {
        return ((BinaryEx(a,b/2)%M)*(BinaryEx(a,b/2)%M))%M;
    }
}
*/
// iterative method 
/*  
    let's say a = 2 and b = 5
    
     b(5)       a (2)       res(1)     -----------------------------initialy
     5           2          2*1=2
     2           4          2
     1           16         32 (ans)
     
*/
int BinaryExIter(int a,int b)
{
    int res =1;
    while(b)
    {
        if(b&1)
        {
            res*=a;
        }
        a*=a;
        b/=2;
    }
    return res;
}
