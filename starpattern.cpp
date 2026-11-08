#include <iostream>
using namespace std;

void pattern(int n) {
    if (n == 0)
        return;

    pattern(n - 1);

    for (int i = 0; i < n; i++) {
        cout << "* ";
    }

    cout << endl;
}

int main() {
    pattern(5);
    return 0;
}