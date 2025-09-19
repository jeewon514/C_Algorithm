#include <iostream>

using namespace std;

int main(){
    int a = 6;
    int *b;

    b = &a;   // b는 a의 주솟값  -->  *b는 a

    cout << "a의 값 " << a << '\n';               // 6
    cout << "*b의 값 " << *b << '\n';             // 6

    cout << "a의 주소 " << &a << '\n';            // 0x5ffe84
    cout << "b의 주소 " << b << '\n';             // 0x5ffe84

    *b += 1;

    cout << "이제 a의 값은 " << a << '\n';        // 7

    return 0;
}