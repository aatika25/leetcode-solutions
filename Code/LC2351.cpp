#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> t;
        for(char c:s)
        {
            if(t.find(c)!=t.end())
            {
                return c;
            }
            else
            {
                t.insert(c);
            }
        }
        return 'a';
    }
};
int main()
{
    string s;
    cout << "s = ";
    cin >> s;
    Solution m;
    cout << "ans = " << m.repeatedCharacter(s);
}