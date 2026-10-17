#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0)
        {
            int cy=(a&b)<<1;
            a=a^b;
            b=cy;
        }
        return a;
    }
};
int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    Solution s;
    cout << s.getSum(a,b);
}