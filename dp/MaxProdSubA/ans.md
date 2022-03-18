DP Solution: TC: O(n) SC: O(1)
2 cases that are tricky:

zeros
negative numbers
These cases can disturb the maximum product subarray.
I) Just before you encounter zero save your current product in variable and reset product to zero, after zero again claculate product and compare it with previous saved product.

II) -ve numbers have 2 cases inside them:

if we encounter 1st -ve number in subarray (encountering odd no. of -ve numbers)
then our maximum sum subarray can be disturbed
else we encounter 2nd -ve number in subarray (encountering even no.of -ve numbers)
then our subaaray can be saved, it can contribute to max sum subarray
we will have to keep track of the maximum product up to that number (we will call max_so_far) and minimum product up to that number (we will call min_so_far). The reason behind keeping track of max_so_far is to keep track of the accumulated product of positive numbers. The reason behind keeping track of min_so_far is to properly handle negative numbers.

=> max_so_far is updated by taking the maximum value among:
- Current number
- Product of last max_so_far and current number
- Product of last min_so_far and current number
=> min_so_far is updated in using the same three numbers except that we are taking minimum among the above three numbers.

```cpp
int maxProduct(vector<int>& nums) {
    
    int maxSoFar= nums[0];
    int minSoFar= nums[0];
    int ans= maxSoFar;
    
    for(int i=1; i<nums.size(); i++) {
        int curr= nums[i];
        
        int temp_max= max(curr, max(maxSoFar*curr, minSoFar*curr));
        // creating temp max as we want to use old maxSoFar and minSoFar and not updated ones in further calculating minSoFar & maxSoFar
        
        minSoFar= min(curr, min(maxSoFar*curr, minSoFar*curr));
        maxSoFar= temp_max;
        
        ans= max(maxSoFar, ans);
    }
    
    return ans;
}
```