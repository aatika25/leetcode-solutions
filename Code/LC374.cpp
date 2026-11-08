#include<bits/stdc++.h>
using namespace std;
int picked;
int guess(int num)
{
    if(num>picked)
    {
        return -1;
    }
    else if(num<picked)
    {
        return 1;
    }
    return 0;
}
class Solution {
public:
    int guessNumber(int n) {
        int st=1, e=n;
        while(st<=e)
        {
            int mid=st+(e-st)/2;
            int x=guess(mid);
            if(x==0)
            {
                return mid;
            }
            else if(x==1)
            {
                st=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return st;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "Enter picked number = ";
    cin >> picked;
    Solution s;
    cout << s.guessNumber(n);
}