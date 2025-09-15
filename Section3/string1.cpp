#include <iostream>
#include <cstring>            // strlen() 함수를 사용하기 위해

using namespace std;

int main(){
    // 사용자 입력
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programming";

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    //cin >> name1;
    cin.get(name1, Size);       // getline은 "cin."으로 연결되어있음 + 1. 어떤 변수의 사용자입력? 2. 입력의 크기
    
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) <<"자입니다만\n";                //strlen(): 길이
    cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n"; //sizeof(): 몇 바이트인지
    cout << "이름이" << name1[0] << "자로 시작하는군요.\n";
    
    name2[3] = '\0';             //NULL 추가시(0~2까지의 name2만 앞으로 출력될 것임!!)
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;

    return 0;
}