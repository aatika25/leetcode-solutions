#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfMatches(int n) {
        int m=0;
        while(n>1)
        {
            if(n%2==0)
            {
                m=m+(n/2);
                n=n/2;
            }
            else
            {
                m=m+((n-1)/2);
                n=((n-1)/2)+1;
            }
        }
        return m;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    Solution s;
    cout << "answer = " << s.numberOfMatches(n);
}