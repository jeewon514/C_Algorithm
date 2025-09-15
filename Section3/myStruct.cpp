#include <iostream>

using namespace std;

int main(){
    // 구조체: 다른 데이터형이 허용되는 데이터의 집합
    // cf) 배열: 같은 데이터형의 집합(ex. int끼리만)

    struct myStruct
    {
        string name;string position;    //멤버
        int height;int weight;
    }B;
    //뒤에 B를 입력하면 B는 다시 구조체 선언안해도 됨(A처럼)

    /*
    myStruct A;             //A는 myStuct에서 정의한 멤버들
    
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    */

    myStruct A = {
        "Son",
        "Stricker",
        183,
        77,
    };

    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;
    

    B = {

    };
    cout << B.height << endl;



    myStruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };
    cout << C[0].height << endl;

    return 0;
}