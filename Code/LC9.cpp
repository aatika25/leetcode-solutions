#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int revNum=0;
        while(x!=0)
        {
            int d=x%10;
            if(revNum>INT_MAX/10 || revNum <INT_MIN/10)
            {
                return 0;
            }
            revNum=(revNum*10)+d;
            x=x/10;
        }
        return revNum;
    }
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int r=reverse(x);
        if(r==x)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int x;
    cout << "x = ";
    cin >> x;
    Solution s;
    if(s.isPalindrome(x))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}