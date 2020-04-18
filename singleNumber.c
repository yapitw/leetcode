int singleNumber(int* nums, int numsSize){
    int n = nums[0];
    for(int i=1; i<numsSize; i++ ) {
         n ^= nums[i];
    }
    return n;
}

// Keypiont: Bitwise, XOR
// Operate XOR with two same values result will be the same as origin.
