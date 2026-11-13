#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.size()>0 && s.find(part)<s.size())
        {
            s.erase(s.find(part),part.size());
        }
        return s;
    }
};
int main()
{
    string s, part;
    cout << "s = ";
    cin >> s;
    cout << "part = ";
    cin >> part;
    Solution t;
    cout << t.removeOccurrences(s,part);
}