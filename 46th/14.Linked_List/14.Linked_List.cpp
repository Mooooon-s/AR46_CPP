// 14.Linked_List.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "yList.h"

int main()
{

    //데이터의 추가 삽입,삭제에있어서 빠르게 처리 가능
    NODE n1;
    NODE n2;
    NODE n3;

    n1._data = 3;
    n1._next = &n2;

    n2._data = 4;
    n2._next = &n3;

    n3._data = 5;

    //비어있는 주소
    //포인터인지 아닌지 확인시켜줌
    n3._next = nullptr;


    std::cout << n1._data << "\n";
    std::cout << n1._next->_data << "\n";

}