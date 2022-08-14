#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ts=1;
    string s,rev;
    cin >> t;
    while(t--) {
        cin >>s;
        rev = s;
        reverse(rev.begin(),rev.end());
        if(s==rev)
        {
            cout << "Case "<<ts<<": Yes"<<endl;
        }
        else
        {
            cout << "Case "<<ts<<": No"<<endl;
        }
        ts++;
    }
    return 0;
}
