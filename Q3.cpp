// User function Template for C++
// Given an array arr, the goal is to find out the smallest number that is repeated exactly ‘k’ times.
// Note: If there is no such element then return -1.

// Example:

// Input: arr[] = [2, 2, 1, 3, 1], k = 2
// Output: 1
// Explanation: Here in array, 2 is repeated 2 times, 1 is repeated 2 times, 3 is repeated 1 time. Hence 2 and 1 both are repeated 'k' times i.e 2 and min(2, 1) is 1 .
// Input: arr[] = [3, 5, 3, 2], k = 1
// Output:  2 
// Explanation: Both 2 and 5 are repeating 1 time but min(5, 2) is 2.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

// Constraints:
// 1 ≤ arr.size() ≤ 106
// 1 ≤ arr[i] ≤ 104
class Solution {
  public:
    int findDuplicate(const vector<int>& arr, int k) {
        
        int ans=INT_MAX;
        unordered_map<int,int>map;
        
        for(int num : arr){
            map[num]++;
        }
        
        for(int num : arr){
            if(map[num]==k){
                ans=min(ans,num);
            };
        };
        
        if(ans==INT_MAX)return -1;
        return ans;
    }
};