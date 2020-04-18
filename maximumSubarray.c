int maxSubArray(int* nums, int numsSize){
    int l = 0;
    int r = 0;
    int max = nums[0];
    int maxEndHere = nums[0];
    
    for(int i=1; i < numsSize; i++) {
        if(nums[i] > maxEndHere+nums[i]){
            l = i;
            maxEndHere = nums[i];
        } else {
            maxEndHere = maxEndHere + nums[i];
        }
        
        if(max < maxEndHere) {
            max = maxEndHere;
            r = i;
        }
    }
    
    return max;
}

// Algorithm: Cycle Finding
