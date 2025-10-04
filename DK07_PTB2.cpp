#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(2);

    if (a == 0) { // Phuong trình b?c 1 ho?c d?c bi?t
        if (b == 0 && c != 0) {
            cout << "NO";
        } 
        else if (b == 0 && c == 0) {
            cout << "WOW";
        } 
        else {
            double x = -1.0 * c / b;
            cout << x;
        }
    } 
    else { // Phuong trình b?c 2
        long long delta_int = b * b - 4LL * a * c;
        if (delta_int < 0) {
            cout << "NO";
        } 
        else if (delta_int == 0) {
            double x = -1.0 * b / (2.0 * a);
            cout << x;
        } 
        else {
            double delta = sqrt((double)delta_int);
            double x1 = (-b - delta) / (2.0 * a);
            double x2 = (-b + delta) / (2.0 * a);
            if (x1 > x2) swap(x1, x2);
            cout << x1 << " " << x2;
        }
    }

    return 0;
}

