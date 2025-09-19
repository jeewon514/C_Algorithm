#include <iostream>

using namespace std;

int main(){
    // 반복문
    for (int i = 0; i < 5; i++){
        cout << i << "번째입니다." << endl;
    }
    
    // 증가 연산자, 감소 연산자
    int a = 10, b = 10;

    cout << "a는 " << a << ", b는 " << b << endl;  // a,b = 10
    cout << "a++는 " << a++ << endl;    // a++ = 10
    cout << "++b는 " << ++b << endl;    // ++b = 11
    cout << "a는 " << a << ", b는 " << b << endl;  // a,b = 11

    return 0;
}