// 18.Static.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include"Test.h"


int main()
{
    gNum = 200;
    Test t1, t2;
    //메로리에서 각각 t가 선언되지만 number는 선언되지 않음
    //이미 데이터영역에 전역변수 처럼 선언되어있기 때문
    //이 static은 클래스 단계에서 전역변수처럼 사용가능

    //영역 밖에서 사용할때는 어느 영역에 존재하는 변수인지 알려줘야함
    //그냥 전역변수와 다를게 하나도 없음 
    // private에서 생성 되면 클래스 내부에서만 사용가능
    Test::number = 200;

    return 0;
}