#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        for(string c:word1)
        {
            s1=s1+c;
        }
        for(string c:word2)
        {
            s2=s2+c;;
        }
        if(s1==s2)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int l1, l2;
    cout << "size of word1 = ";
    cin >> l1;
    cout << "enter the strings for word1:\n";
    vector<string> word1(l1);
    for(int i=0;i<l1;i++)
    {
        cin >> word1[i];
    }
    cout << "size of word2 = ";
    cin >> l2;
    cout << "enter the strings for word2:\n";
    vector<string> word2(l2);
    for(int i=0;i<l2;i++)
    {
        cin >> word2[i];
    }
    Solution t;
    bool ans=t.arrayStringsAreEqual(word1,word2);
    if(ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}