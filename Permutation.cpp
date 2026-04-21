#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, r;

    cout << "Enter number of items (n): ";
    cin >> n;

    cout << "Enter number of positions (r): ";
    cin >> r;

    int result = pow(n, r);

    cout << "Permutation with repetition = " << result << endl;

    return 0;
}
