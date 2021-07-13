#include<algorithm>
#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    vector<int>  nums;
    int target;
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        int n =nums.size();
        for (int i = 0; i < n; ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
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