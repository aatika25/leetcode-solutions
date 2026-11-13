#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAlphaNum(char c)
    {
        c=tolower(c);
        if((c>='a' && c<='z') || (c>='0' && c<='9'))
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j)
        {
            if(!isAlphaNum(s[i]))
            {
                i++;
                continue;
            }
            if(!isAlphaNum(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main()
{
    string s;
    cout << "s = ";
    cin >> s;
    Solution t;
    if(t.isPalindrome(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}