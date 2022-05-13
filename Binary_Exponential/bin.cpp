int BinaryEx(int a,int b)
{
    if(b==0) return 1;

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
