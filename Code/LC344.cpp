#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, e=s.size()-1;
        while(st<=e)
        {
            swap(s[st],s[e]);
            st++;
            e--;
        }   
    }
};
int main()
{
    int l;
    cout << "length of array = ";
    cin >> l;
    cout << "enter the elements:\n";
    vector<char> s(l);
    for(int i=0;i<l;i++)
    {
        cin >> s[i];
    }
    Solution t;
    t.reverseString(s);
    for(int i=0;i<l;i++)
    {
        cout << s[i] << " ";
    }
}