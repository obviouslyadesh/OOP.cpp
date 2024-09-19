#include <iostream>

using namespace std;

double sum_series(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i / (i + 2.0);
    }
    return sum;
}

int main() {
    int n = 100; // Since the last term has denominator 99
    double result = sum_series(n);
    cout << "Sum of the series: " << result << endl;
    return 0;
}