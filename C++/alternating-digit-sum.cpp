// Time: O(log n)
// Space: O(1)

// This class contains a method to compute the alternate digit sum of a non-negative integer.
class Solution {
public:
    // This function calculates the alternate digit sum of a non-negative integer n.
    // For example, for n = 12345, the result will be 1 - 2 + 3 - 4 + 5 = 3.
    // Returns 0 for n = 0.
    int alternateDigitSum(int n) {
        int result = 0;
        int alternateSign = 1; // To alternate between addition and subtraction

        while (n) {
            alternateSign *= -1; // Flip the sign
            result += alternateSign * (n % 10); // Add the current digit with the appropriate sign
            n /= 10; // Remove the last digit
        }

        return result; // Return the final calculated sum
    }
};