int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    int left = 1, right = x / 2, ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid <= x / mid) {   // avoid overflow by using division
            ans = mid;          // mid is a possible answer
            left = mid + 1;     // try to find a larger one
        } else {
            right = mid - 1;    // mid^2 is too large
        }
    }

    return ans;
}
