#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int T; cin >> T;
    int A,B;

    for (int i = 1; i <= T; i++) {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A+B << '\n';
    }

    return 0;
}