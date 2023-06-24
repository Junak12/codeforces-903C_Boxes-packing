#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    int n;
    cin>>n;
    int a[n];
    map<int,int>m,m2;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int mx=INT_MIN;
    for(auto x:m)
    {
        m2[x.second]++;
        if(x.second>mx)
        {
            mx=x.second;
        }
    }
    cout<<mx<<endl;;
}
