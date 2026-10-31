#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        if(coins>=costs[0])
        {
            vector<long long> pr(costs.size());
            pr[0]=costs[0];
            for(int i=1;i<costs.size();i++)
            {
                pr[i]=pr[i-1]+costs[i];
            }
            for(int i=pr.size()-1;i>=0;i--)
            {
                if(coins>=pr[i])
                {
                    return i+1;
                }
            }
        }
        return 0;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the costs of ice creams:\n";
    vector<int> costs(n);
    for(int i=0;i<n;i++)
    {
        cin >> costs[i];
    }
    cout << "coins = ";
    int coins;
    cin >> coins;
    Solution s;
    cout << s.maxIceCream(costs,coins);
}