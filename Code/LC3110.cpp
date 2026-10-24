#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        int a=0;
        for(int i=0;i<s.size()-1;i++)
        {
            a=a+abs((s[i]-'a')-(s[i+1]-'a'));
        }
        return a;
    }
};
int main()
{
    string s;
    cout << "enter the string: ";
    cin >> s;
    Solution t;
    cout << t.scoreOfString(s);
}