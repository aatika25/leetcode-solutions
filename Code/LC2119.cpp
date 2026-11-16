#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=0;
        int f=num;
        while(num!=0)
        {
            int d=num%10;
            rev1=(rev1*10)+d;
            num=num/10;
        }
        int rev2=0;
        while(rev1!=0)
        {
            int d=rev1%10;
            rev2=(rev2*10)+d;
            rev1=rev1/10;
        }
        if(rev2==f)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int num;
    cout << "num  = ";
    cin >> num;
    Solution s;
    if(s.isSameAfterReversals(num))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}