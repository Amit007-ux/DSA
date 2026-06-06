void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Step 1: Move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }

    // Step 2: Fill the remaining positions with zeros
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}
