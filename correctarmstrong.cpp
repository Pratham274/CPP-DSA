#include <iostream>
using namespace std;

int countdigit(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while (n) {
        rem = n % 10;
        n /= 10;
        ans += power(rem, digit); // Calculate power manually
    }

    return ans == num;
}

int main() {
    int num;
    cin >> num;

    // Count digits
    int digit = countdigit(num);

    // Check if Armstrong number
    if (armstrong(num, digit))
        cout << "Yes, it's an Armstrong number." << endl;
    else
        cout << "No, it's not an Armstrong number." << endl;

    return 0;
}
