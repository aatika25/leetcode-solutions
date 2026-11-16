#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size(), idx=0;
        for(int i=0;i<n;)
        {
            char c=chars[i];
            int cnt=0;
            while(i<n && chars[i]==c)
            {
                cnt++;
                i++;
            }
            chars[idx++]=c;
            if(cnt>1)
            {
                string str=to_string(cnt);
                for(char k:str)
                {
                    chars[idx++]=k;
                }
            }
        }
        chars.resize(idx);
        return idx;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << "enter the elements:\n";
    vector<char> chars(n);
    for(int i=0;i<n;i++)
    {
        cin >> chars[i];
    }
    Solution s;
    cout << "ans = " << s.compress(chars);
    cout << "\nthe updated array is:\n";
    for(int i=0;i<chars.size();i++)
    {
        cout << chars[i] << " ";
    }
}