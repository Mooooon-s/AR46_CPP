#pragma once
//전역변수 처럼 사용됨
int gNum = 100;

class Test
{
public:
	//함수도 static을 사용가능
	//그냥 전역 함수 같은 느낌
	static void PrintNumber() { };

private:
	int t;
	//클래스 내부에서 선언되는 전역변수
	static int number;
	//프로그램이 켜지면 메모리에 데이터 영역에 gNum과 number 가 올라감
};

