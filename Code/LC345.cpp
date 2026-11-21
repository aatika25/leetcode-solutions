#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v={'a','e','i','o','u'};
        vector<char> w;
        for(char i:s)
        {
            auto it=find(v.begin(),v.end(),tolower(i));
            if(it!=v.end())
            {
                w.push_back(i);
            }
        }
        reverse(w.begin(),w.end());
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            auto it=find(v.begin(),v.end(),tolower(s[i]));
            if(it!=v.end())
            {
                s[i]=w[j];
                j++;
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
    cout << "ans = " << t.reverseVowels(s);
}