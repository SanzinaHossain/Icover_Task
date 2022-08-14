#include <bits/stdc++.h>
using namespace std;
long long  divisor(long long  n,long long k)
{
    long long ans1,ans2;
    ans1=(n/3)*2;
    ans2=(k/3)*2;
    if(n%3==2)
    {
        ans1++;
        //cout<<ans1<<endl;
    }
    if(k%3==2)
    {
        ans2++;
        //cout<<ans2<<endl;
    }
    return ans1-ans2;
}
int main()
{
    long long  t,n,i=1,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int s=divisor(b,a-1);
        //cout<<s<<endl;
        cout << "Case "<<i++<<": "<<s<<endl;
    }
    return 0;
}
