#include <iostream>

using namespace std;

const int SIZE = 30;
int main(){
    cout << "문장을 입력하십시오.\n";
    char line[SIZE];
    cin.get(line,SIZE);
    cout << "입력하신 문장은\n";

    int spaces = 0;
    for(int i =0; line[i] != '\0'; i++){
        cout << line[i];

        if(line[i] != ' ')
            continue;             // 공백일 때는 continue로 인해서 실행X
        spaces++;
    }
    cout << "입니다.\n";
    cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces <<"입니다.\n";
    cout << "while문이 끝났습니다.\n";

    return 0;
}