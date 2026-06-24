class Solution {
public:
    long long calculateTotalHours(vector<int>& piles, int hourlySpeed) {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalHours += (piles[i] + hourlySpeed - 1) / hourlySpeed;
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int pile : piles) {
            high = max(high, pile);
        }

        int result = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (calculateTotalHours(piles, mid) <= h) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};