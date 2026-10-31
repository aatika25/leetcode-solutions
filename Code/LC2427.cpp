#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0;
        for(int i=1;i<=min(a,b);i++)
        {
            if(a%i==0 && b%i==0)
            {
                c++;
            }
        }
        return c;
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
    cout << s.commonFactors(a,b);
}