#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int A,B,C;
    cin >> A >> B >> C;

    int min = (B+C) % 60;
    int hour = (B+C) / 60;
    int total_hour = (A+hour) % 24;

    cout << total_hour << " " << min;

    return 0;
}