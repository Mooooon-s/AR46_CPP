// 10.Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//얇은 복사
//call by value
void swap(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

//깊은 복사
//call by reference
void SWAP(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print(char* str) {
    //주소값을 넘겨주면 메모리를 적게 사용
    //*str =>8바이트
    //strA[256]-> 256바이트

    std::cout << str;
}

int Ystrlen(char* a) {
    int cnt = 0;
    for (int i = 0; i < 256; i++) {
        //포인터의 더하기 연산자를 이용하면 그 포인터의 타입 크기만큼 이동함
        //가독성이 너무나 떨어지는 문법
        //char ch =*(a + i);

        //포인터 변수는 배열처럼 사용이 가능하다
        char ch = a[i];


        if (ch == '\0') {
            return i;
        }
    }

}

//최신에서는 이렇게 넘겨줘도 원본값을 넘겨줌
void Swap(int arr[10]);
void SWap(int arr[10][20]);

int main()
{
    int c = 9;
    int d = 10;
    //c와 d 가 변하지 않음
    swap(c, d);
    std::cout << c << d;
    
    //c와 d가 변함
    SWAP(&c, &d);
    std::cout << c << d;    

    //정수 지정하려면 ->int
    //글자 -> char,wchar_t
    //포인터 변수: 주소를 저장할수 있는 자료형의 타입
    //메모리 주소는 16진수로 표기

    //&d 변수 앞에 &를 붙이면 주소를 받아옴
    //포인터 변수의 크기는 운영체제의 데이터 처리 크기에 따라서 정해진다.
    //64비트 환경에서 8바이트
    //32비트 환경에서는 4바이트

    //단순하게 주소만 저장할 용도로 사용한다면
    //void* 또는 정수를 저장할수 있는 데이터 타입을 
    //사용해도 무관
    void* p = &d;//8바이트
    //unsigned int ref = (int)&d;//적은 바이트로 저장가능

    //하지만 포인터 변순\에는 특별한 기능이 존재 
    //역참조
    //변수에 주소값이 존재하면 그 주소의 값을 가져온다

    //포인터가 얼마만큼 참조 할건지를 정해주기 위해서
    //형을 지정해줘서 형의 크기 만큼 참조
    int* p1 = &d;

    std::cout << p1;  //주소가 들어가있음
    std::cout << *p1;//주소를 역참조해서 값을 받아옴

    char strA[256]= "Hello World!\n";
    int len = Ystrlen(strA);

    //포인터의 제일큰 단점
    //다루기 어렵다
    //대체제가 있다. 래퍼런스 &


    std::cout << "\n";
    int num = 10;
    //래퍼런스는 넣어준 변수의 다른이름이 됨
    int& ref = num; //자동으로 역참조를 함 *num
    //한번 초기화를 하면 바꿀수 없음
    //선언후 반드시 초기화를 같이 해야함
    ref = 200;
    std::cout << num;
    ref = d;
    std::cout << "\n"<<num;

    int arr[3][2] = {1,2,3,4,5,6};

    int (*pArr)[2] = arr;

    std::cout << (*(*pArr))<<std::endl;



}