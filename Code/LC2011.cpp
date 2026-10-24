#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string s:operations)
        {
            if(s=="++X" || s=="X++")
            {
                x=x+1;
            }
            else if(s=="--X" || s=="X--")
            {
                x=x-1;
            }
        }
        return x;
    }
};
int main()
{
    int n;
    cout << "no of operations = ";
    cin >> n;
    vector<string> operations(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> operations[i];
    }
    Solution t;
    cout << t.finalValueAfterOperations(operations);
}