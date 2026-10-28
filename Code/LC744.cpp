#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0, e=letters.size()-1;
        char a=letters[0];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(target<letters[mid])
            {
                a=letters[mid];
                if(mid==0 || target>letters[mid-1])
                {
                    return a;
                }
                else
                {
                    e=mid-1;
                }
            }
            else
            {
                s=mid+1;
            }
        }
        return a;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<char> letters(n);
    for(int i=0;i<n;i++)
    {
        cin >> letters[i];
    }
    cout << "target = ";
    char target;
    cin >> target;
    Solution t;
    cout << t.nextGreatestLetter(letters,target);
}