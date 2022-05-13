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
