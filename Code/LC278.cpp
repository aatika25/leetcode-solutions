#include<bits/stdc++.h>
using namespace std;
int firstBad;
bool isBadVersion(int version)
{
    return version>=firstBad;
}
class Solution {
public:
    int firstBadVersion(int n) {
        int st=1, e=n, ans=INT_MAX;
        while(st<=e)
        {
            int mid=st+(e-st)/2;
            if(isBadVersion(mid))
            {
                e=mid-1;
                ans=min(ans,mid);
            }
            else
            {
                st=mid+1;
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "for this program to work as standalone thing, we make a similar function to isBadVersion and take the input from the user\n";
    cout << "enter the first bad version to be used = ";
    cin >> firstBad;
    Solution s;
    cout << "first bad version = " << s.firstBadVersion(n);
}