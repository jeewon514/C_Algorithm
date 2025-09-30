#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X; cin >> X;
    int N; cin >> N;

    int a, b;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        sum += (a*b);
    }
    if (sum == X) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}