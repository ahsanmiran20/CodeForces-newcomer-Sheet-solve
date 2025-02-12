//Attention: solved using Ai

#include <iostream>
using namespace std;

bool is_lucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        n /= 10;
    }
    return true;
}

void lucky_numbers(int A, int B) {
    bool found = false;
    for (int i = A; i <= B; i++) {
        if (is_lucky(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found)
        cout << "-1";
    cout << endl;
}

int main() {
    int A, B;
    cin >> A >> B;
    lucky_numbers(A, B);
    return 0;
}
