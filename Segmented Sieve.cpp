#include<bits/stdc++.h>
using namespace std;
void simpleSieve(int n)
{
    bool mark[n];
    for(int i=0;i<n;i++)
    {
        mark[i]=true;
    }
    for(int p=2;p*p<n;p++)
    {
        if(mark[p]==true)
        {
            for(int i=p*p;i<n;i+=p)
            {
                mark[i]=false;
            }
        }
    }
    for(int p=2;p<n;p++)
    {
        if(mark[p]==true)
        {
            cout<<p<<" ";
        }
    }
}
int main()
{
    int n=5;
    simpleSieve(n);
    return 0;

}
