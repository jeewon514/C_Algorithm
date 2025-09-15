#include <iostream>

using namespace std;

int main(){
    /*
    배열(array) : 같은 데이터형의 집합
    typyName arrayName[arraySize];
    */

    short month[12] = {1, 2, 3};        //선언 + 초기화
    cout << month[0] << endl;


    /*
    문자열 : 문자의 열.
    */

    char a[] = "Hello";
    cout << a << endl;

    return 0;
}