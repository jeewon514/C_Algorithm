#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;cin >> N;
    int arr[100];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int v;cin >> v;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == v) cnt += 1;
    } cout << cnt;

    return 0;
}
