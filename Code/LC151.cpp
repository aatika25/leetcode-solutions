#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            string word="";
            while(i<s.size() && s[i]!=' ')
            {
                word=word+s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.size()>0)
            {
                ans=ans+" "+word;
            }
        }
        return ans.substr(1);
    }
};
int main()
{
    string s;
    cout << "s = ";
    getline(cin,s);
    Solution t;
    cout << "ans = " << t.reverseWords(s);
}