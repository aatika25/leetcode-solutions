#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSame(int f[], int tf[])
    {
        for(int i=0;i<26;i++)
        {
            if(f[i]!=tf[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int fr[26]={0};
        for(char c:s1)
        {
            fr[c-'a']++;
        }
        int ws=s1.size();
        for(int i=0;i<s2.size();i++)
        {
            int twi=0, idx=i;
            int wfr[26]={0};
            while(twi<ws && idx<s2.size())
            {
                wfr[s2[idx]-'a']++;
                twi++;
                idx++;
            }
            if(isSame(fr,wfr))
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    string s1, s2;
    cout << "s1 = ";
    cin >> s1;
    cout << "s2 = ";
    cin >> s2;
    Solution t;
    if(t.checkInclusion(s1,s2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}