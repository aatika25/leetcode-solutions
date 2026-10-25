#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistinct(string s) {
        set<char> f;
        for(char c:s)
        {
            f.insert(c);
        }
        return f.size();
    }
};
int main()
{
    string s;
    cout << "s = ";
    cin >> s;
    Solution t;
    cout << t.maxDistinct(s);
}