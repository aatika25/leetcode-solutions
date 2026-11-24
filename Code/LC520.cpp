#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1)
        {
            return true;
        }
        if(word[0]==tolower(word[0]))
        {
            for(int i=1;i<word.size();i++)
            {
                if(word[i]!=tolower(word[i]))
                {
                    return false;
                }
            }
        }
        if(word[0]!=tolower(word[0]))
        {
            if(word[1]==tolower(word[1]))
            {
                for(int i=1;i<word.size();i++)
                {
                    if(word[i]!=tolower(word[i]))
                    {
                        return false;
                    }
                }
            }
            else
            {
                for(int i=1;i<word.size();i++)
                {
                    if(word[i]==tolower(word[i]))
                    {
                        return false;
                    }
                }
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
    if(t.detectCapitalUse(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}