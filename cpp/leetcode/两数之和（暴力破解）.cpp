#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
    public:
    vector<int> nums;
    int target;
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   return {i,j};
                }
            }
        }
        return {};
    }
    
};
int main()
{
    Solution q;
    q.nums={2,7,11,15};
    q.target=9;
    vector<int> m=q.twoSum(q.nums,q.target);
    int Size=m.size();
    for(int i=0;i<Size;i++)    
{    
   cout<<m[i]<<"     ";    
}    
   cout<<endl; 
    return 0;

}