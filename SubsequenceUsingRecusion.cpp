#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
#define en  "\n"

void subSequence(int a[], int ind, int n,vector<int>&ans)
{
    if(ind==n)
    {
        for(auto i : ans) cout<<ans[i]<<" ";
        if(ans.size()==0) cout<<"{ }";
        cout<<en;
        return;
    }
    ans.push_back(a[ind]);
    subSequence(a,ind+1,n,ans);
    ans.pop_back();
    subSequence(a,ind+1,n,ans);
}


void Solve()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>ans;
    for(int i=0; i<n; i++)  cin>>a[i];
    subSequence(a,0,n,ans);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T=1,t=0;
    //cin>>T;
    while(T--){
            t++;
   // cout<<"Case "<<t<<": ";
        Solve();
    }

    return 0;
}
