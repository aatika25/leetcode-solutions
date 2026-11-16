#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                s+=i;
            }
        }
        if(s==num)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int num;
    cout << "num = ";
    cin >> num;
    Solution s;
    if(s.checkPerfectNumber(num))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}