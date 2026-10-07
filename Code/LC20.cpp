#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(char i:s)
        {
            if(i=='(' || i=='{' || i=='[')
            {
                p.push(i);
            }
            else
            {
                if(p.empty())
                {
                    return false;
                }
                else if((p.top()=='(' && i==')') || (p.top()=='{' && i=='}') || (p.top()=='[' && i==']'))
                {
                    p.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(p.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    string s;
    cin >> s;
    Solution t;
    if(t.isValid(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}