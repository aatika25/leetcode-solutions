#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int cnt=0;
        for(int i=0,j=0;i<n && j<m;)
        {
            if(s[j]>=g[i])
            {
                cnt=cnt+1;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return cnt;
    }
};
int main()
{
    cout << "number of children = ";
    int n;
    cin >> n;
    cout << "enter the greed factors:\n";
    vector<int> g(n);
    for(int i=0;i<n;i++)
    {
        cin >> g[i];
    }
    cout << "number of cookies = ";
    int p;
    cin >> p;
    cout << "enter the size of cookies:\n";
    vector<int> s(p);
    for(int i=0;i<p;i++)
    {
        cin >> s[i];
    }
    Solution t;
    int ans=t.findContentChildren(g, s);
    cout << ans;
    return 0;
}