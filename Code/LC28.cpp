#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int t=haystack.find(needle);
        if(t!=string::npos)
        {
            ans=t;
        }
        return ans;
    }
};
int main()
{
    string haystack, needle;
    cout << "haystack = ";
    cin >> haystack;
    cout << "needle = ";
    cin >> needle;
    Solution s;
    int f=s.strStr(haystack, needle);
    cout << f;
    return 0;
}