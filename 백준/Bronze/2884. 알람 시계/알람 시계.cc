#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H,M;
    cin >> H >> M;

    if (H >= 0 && M >= 45) cout << H << " " << M - 45;
    else if (H > 0 && M < 45) cout << H-1 << " " << M + 15;
    else if (H == 0 && M < 45) cout << "23" << " " << M + 15;

    return 0;
}