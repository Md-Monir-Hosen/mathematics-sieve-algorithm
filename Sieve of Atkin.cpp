#include<bits/stdc++.h>
using namespace std;
void SieveOfAtkin(int n)
{
    bool sieve[n+1];
    for(int i=0;i<=n;i++)
    {
        sieve[i]=false;
    }
    if(n>2)
    {
        sieve[2]=true;
    }
    if(n>3)
    {
        sieve[3]=true;
    }
    for(int x=1;x*x<=n;x++)
    {
        for(int y=1;y*y<=n;y++)
        {
            int m=(4*x*x)+(y*y);
            if(m<=n &&(m%12==1 || m%12==5))
            {
                sieve[m] ^=true;
            }
             m=(3*x*x)+(y*y);
            if(m<=n && m%12==7)
            {
                sieve[m] ^=true;
            }
           m=(3*x*x)-(y*y);
            if(x>y && m<=n && n%12==11)
            {
                sieve[m] ^=true;
            }
        }
    }
    for(int r=5;r*r<=n;r++)
    {
        if(sieve[r])
        {
            for(int i=r*r;i<=n;i+=r*r)
            {
                sieve[i]=false;
            }
        }
    }
    for(int a=1;a<=n;a++)
    {
        if(sieve[a])
        {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int limit = 19;
    SieveOfAtkin(limit);
    return 0;
}
