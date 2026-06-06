long long zeroFilledSubarray(int* nums, int numsSize) {
    long long count = 0;
    long long consecutiveZeros = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            consecutiveZeros++;
            count += consecutiveZeros;  // add all subarrays ending here
        } else {
            consecutiveZeros = 0;  // reset when non-zero encountered
        }
    }

    return count;
}
