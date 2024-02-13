#include<bits/stdc++.h>
using namespace std;
const long long MAX_SIZE=1000001;
vector<long long>isPrime(MAX_SIZE,true);
vector<long long>prime;
vector<long long>SPF(MAX_SIZE);
void manipulated_seive(int n)
{
    isPrime[0]=isPrime[1]=false;
    for(long long int i=2;i<n;i++)
    {
        if(isPrime[i])
        {
         prime.push_back(i);
         SPF[i]=i;
        }
        for(long long int j=0;j<(int)prime.size()&&i*prime[j]<n && prime[j]<=SPF[i];j++)
        {
            isPrime[i*prime[j]]=false;
            SPF[i*prime[j]]=prime[j];
        }
    }
}
int main()
{
    int N = 13 ;
    manipulated_seive(N);
    for (int i=0; i<prime.size() && prime[i] <= N ; i++)
        cout << prime[i] << " ";
    return 0;
}
