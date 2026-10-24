#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
        }
        return s;       
    }
};
int main()
{
    string s;
    cout << "s = ";
    cin >> s;
    Solution t;
    cout << t.toLowerCase(s);
}