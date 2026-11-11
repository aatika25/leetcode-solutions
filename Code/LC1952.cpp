#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isThree(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                cnt++;
            }
        }
        if(cnt!=3)
        {
            return false;
        }
        return true;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    Solution s;
    if(s.isThree(n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}