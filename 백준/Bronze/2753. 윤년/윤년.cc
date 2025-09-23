#include <iostream>

using namespace std;

int main() {
    cin.sync_with_stdio(NULL);
    cin.tie(NULL);

    int y;
    cin >> y;

    if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) cout << "1";
    else cout << "0";

    return 0;
}