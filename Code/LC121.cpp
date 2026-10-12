#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int bestBuy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>bestBuy)
            {
                profit=max(profit,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return profit;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the elements:\n";
    vector<int> prices(n);
    for(int i=0;i<n;i++)
    {
        cin >> prices[i];
    }
    Solution s;
    cout << s.maxProfit(prices);
}