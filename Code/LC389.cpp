#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            freq[t[i]-'a']--;
            if(freq[t[i]-'a']<0)
            {
                return t[i];
            }
        }
        return ' ';
    }
};
int main()
{
    string s, t;
    cout << "s = ";
    cin >> s;
    cout << "t = ";
    cin >> t;
    Solution a;
    cout << a.findTheDifference(s,t);
}