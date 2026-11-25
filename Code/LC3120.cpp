#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int s[26]={0};
        int c[26]={0};
        int cnt=0;
        for(char i:word)
        {
            if(i==tolower(i))
            {
                s[i-'a']++;
            }
            else
            {
                c[i-'A']++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(s[i]>0 && c[i]>0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    string word;
    cout << "word = ";
    cin >> word;
    Solution s;
    cout << "ans = " << s.numberOfSpecialChars(word);
}