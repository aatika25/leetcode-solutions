#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=1;
        while(i*i<=num)
        {
            if(i*i==num)
            {
                return true;
            }
            else
            {
                i=i+1;
            }
        }
        return false;
    }
};
int main()
{
    int num;
    cin >> num;
    Solution s;
    if(s.isPerfectSquare(num))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}