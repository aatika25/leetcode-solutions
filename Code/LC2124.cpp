#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkString(string s) {
        auto it=s.find("b");
        for(int i=it;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                return false;
            }
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
    if(t.checkString(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}