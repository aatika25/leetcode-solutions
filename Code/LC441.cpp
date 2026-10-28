#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        long long r=0, us=0;
        while(us<=n)
        {
            r++;
            us=us+r;
        }
        return r-1;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    Solution s;
    cout << s.arrangeCoins(n);
}