#include <iostream>
/*#define PIE 3.141592*/
using namespace std;

int main(){
    // 원의 넓이를 구하는 프로그램
    // 반지름*반지름*파이

    const float PIE = 3.141592;   // float 까지 써줘야함

    int r = 3;          // 앞에 int 대신 auto 로 하면 저절로 "int" 로 인식

    cout << r*r*PIE << endl;

    return 0;
}