#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)
        {
            return 1;
        }
        vector<int> t(n+1);
        t[0]=0;
        for(int i=1;i<=n;i++)
        {
            t[i]=t[i-1]+i;
        }
        for(int i=1;i<n;i++)
        {
            int diff=t[n]-t[i-1];
            int pd=t[i]-t[0];
            if(diff==pd)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    int n;
    cin >> n;
    Solution s;
    int ans=s.pivotInteger(n);
    cout << ans;
    return 0;
}