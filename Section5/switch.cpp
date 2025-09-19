#include <iostream>

using namespace std;

int main(){
    // 실행 갯수가 3개를 넘어가면 if-else보다 switch문이 효율적.
    int a;
    cin >> a;

    switch (a){
    case 1:
        cout << "입력하신 값은 1입니다.\n";
        break;
    
    case 2:
        cout << "입력하신 값은 2입니다.\n";
        break;

    case 3:
        cout << "입력하신 값은 3입니다.\n";
        break;
    
    default:
        cout << "입력하신 값은 1,2,3 이외의 다른 값입니다.\n";
        break;
    }

    cout << "switch 구문은 끝났습니다.\n";

    return 0;
}