#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
#define en  "\n"

void subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size(),subset=1<<n;
        for(int i=0; i<subset; i++)
        {
            vector<int>x;
            for(int j=0; j<n; j++)
            {
                if(i & (1<<j)) 
                   x.push_back(nums[j]);
            }
            //ans.push_back(x);
            for(auto i : sub) cout<<i<<" ";
            if(sub.size()==0) cout<<"{}"<<endl;
            cout<<endl;
        }
        //return ans;
    }

void Solve()
{
    int n;
    cin>>n;
    vector<int>v(n),sub;
    for(int i=0; i<n; i++)  cin>>v[i];
    subSet(v);
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
