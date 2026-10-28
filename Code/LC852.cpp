#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1, end=arr.size()-2;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]>arr[mid-1])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    Solution s;
    cout << s.peakIndexInMountainArray(arr);
}