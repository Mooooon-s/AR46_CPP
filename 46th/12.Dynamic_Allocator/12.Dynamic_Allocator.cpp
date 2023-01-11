// 12.Dynamic_Allocator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>
using namespace std;

class Moster {
public:
    int hp;
    int mp;
    int tp;
};


int main()
{
    int len = 0;
    //프로그램 실행 도중에 입력받아서 할당하고 싶음
    cin >> len;
    
    //new연산자는 메로리 할당을 하고 가장 처음 주소값을 반환 해줌
    char* str= new char[len];
    //C스타일
    //char* str = (char*)malloc(100);
    //malloc은 void형 return이기때문에 형변환이 필요


    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';

    //사용후에는 반드시 해제(주소를 해제 하면됨)
    //메모리에 계속 싸이게 됨
    delete[] str;
    
    //C스타일
    //free(str);

    int* p = new int;
    *p = 3;

    //메모리 구조상
    //fdfdfdfd  4바이트
    //  03      4바이트
    //fdfdfdfd  4바이트
    //로 4바이트만 만들었지만 실제로는 12바이트가 할당됨
    //해제를 할 때 fd를 기준으로 해제함

    Moster* moster = new Moster;
    //Moster* moster = new Moster[256];
    moster->hp = 200;

    return 0;
}
