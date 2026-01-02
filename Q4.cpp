// Given an array arr[] of integers, find the number of pairs whose XOR is odd in the array.

// Examples:
// Input: arr[] = [1, 2, 3]
// Output: 2
// Explanation: The XOR of the pairs is as follows: 1 ^ 2 = 3 (odd), 1 ^ 3 = 2 (even), 2 ^ 3 = 1 (odd), There are 2 pairs with odd XOR.
// Input: arr[] = [1, 2]
// Output: 1
// Explanation: The XOR of the pair is: 1 ^ 2 = 3 (odd), There is 1 pair with odd XOR.
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ arr.size() ≤ 10^6
// 1 ≤ arr[i] ≤ 10^5

class Solution
{
public:
    long long countOddXorPairs(vector<int> &arr)
    {
        // code here

        long long odd = 0,even = 0;
        
        for (int num:arr){
            if(num%2 == 0){
                even++;
            }else{
                odd++;
            }
        };
        
        return odd*even;
    }
};
