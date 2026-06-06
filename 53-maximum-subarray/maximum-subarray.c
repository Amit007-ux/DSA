int maxSubArray(int* nums, int numsSize) {
    int maxSoFar = nums[0];
    int currentMax = nums[0];

    for (int i = 1; i < numsSize; i++) {
        // Either extend the current subarray or start a new one
        currentMax = (nums[i] > currentMax + nums[i]) ? nums[i] : currentMax + nums[i];
        // Update global maximum
        if (currentMax > maxSoFar) {
            maxSoFar = currentMax;
        }
    }

    return maxSoFar;
}
