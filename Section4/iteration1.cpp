#include <iostream>

using namespace std;

int main(){
    // 배열 기반 반복문
    int a[10] = {1, 3, 5, 7, 9};

    for(int i = 0; i < 5; i++){
        cout << a[i];
    }
    cout << "\n";

    // a[10] 이라서 10개 칸 모두 출력(간결하지만 주의)
    for(int i : a){
        cout << i;
    }

    return 0;
}