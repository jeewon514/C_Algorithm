#include <iostream>

using namespace std;

int main(){
    // while문1
    string str = "Panda";
    int i = 0;                    // 밖에서 선언
    while (str[i] != '\n'){
        //"Panda" 끝에 '\n'을 만나지 않으면 출력
        cout << str[i] << endl;
        i++;                      // 밖에서 선언
    }
    
    return 0;
}