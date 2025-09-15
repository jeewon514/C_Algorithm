#include <iostream>

using namespace std;

int main(){
    // 배열은 다른 배열에 통쨰로 대입 불가능! but, string은 가능함
    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panda";

    // char1 = char2; // 틀리다.
    str1 = str2;  // 맞다.
    cout << str1 << endl;

    return 0;
}