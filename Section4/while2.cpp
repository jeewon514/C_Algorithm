#include <iostream>

using namespace std;

int main(){
    // for문
    for(int i = 0; i < 3; i++){
        cout << "for문입니다.\n";
    }

    // while문
    int j = 0;                    // 밖에서 선언
    while (j < 3){
        cout << "while문 입니다.\n";
        j++;                      // 밖에서 선언
    }

    //cout << i << endl;  --> 밖에서 'i' 사용 불가능
    cout << j << endl;
    

    // do-while문
    int k1 = 0;                    // 밖에서 선언
    do{
        cout << "do-while문 입니다.\n";
        k1++;
    }while (k1 < 3);

    bool k2 = false;
    do{
        cout << "while문 입니다.\n";
    }while (k2);

    return 0;
}