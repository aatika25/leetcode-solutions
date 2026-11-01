#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMax(int mid, int n, int m, vector<int> position)
    {
        int balls=1, curr=0;
        for(int i=1;i<n;i++)
        {
            if(position[i]-position[curr]>=mid)
            {
                balls++;
                curr=i;
            }
        }
        if(balls<m)
        {
            return false;
        }
        return true;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size(), ans=-1;
        int st=1, end=(position[n-1]-position[0]);
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(isMax(mid, n, m, position))
            {
                ans=mid;
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> position(n);
    cout << "enter the positions:\n";
    for(int i=0;i<n;i++)
    {
        cin >> position[i];
    }
    int m;
    cout << "m = ";
    cin >> m;
    Solution s;
    cout << "output = " << s.maxDistance(position,m);
}