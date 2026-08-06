class Solution {
private:
    int digitsProduct(int n) {
        int result = 1;
        int temp;

        while (n > 0) {
            temp = n % 10;
            n = n / 10;
            result *= temp;
        }

        return result;
    }

public:
    int smallestNumber(int n, int t) {
        int total = digitsProduct(n);

        while (total % t != 0) {
            n++;
            total = digitsProduct(n);
        }

        return n;
    }
};