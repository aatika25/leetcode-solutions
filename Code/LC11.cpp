#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int s=0, e=n-1;
        int ans=0;
        while(s<e)
        {
            int tem=(e-s)*(min(height[e],height[s]));
            ans=max(ans,tem);
            if(height[e]<height[s])
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> height(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> height[i];
    }
    Solution y;
    int f=y.maxArea(height);
    cout << "max area = " << f;
    return 0;
}