#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int a=0, b=1, c;
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        return c;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    Solution s;
    cout << s.fib(n);
}