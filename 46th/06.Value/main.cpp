
//headers
#include <iostream>

//전역 변수
//어디서든 접근 가능.
//클래스 만들면 거기서도 접근 가능할까?
//안돼. script에 따르면 가능. 

int gNum = 100;

int main()
{

	////지역 변수
	//// only exists in region
	//int g = 0;
	//if (true) {
	//	g = 10;
	//}
	//int i;

	//{
	//	int a = 0;
	//}

	//문자형
	//문자열 = ""
	//문자 = ''
	int num = 0;
	char ch = 'A';
	//저장은 숫자로. char이면 출력할 때 char에 맞게 
	//2byte으론 우리 나라 글자를 커버할 수 없다.
	wchar_t wCh = 'L'; //2byte 짜리, ascii 용.
	std::cout << (sizeof(wchar_t));
	std::cout << ch + 32;
	//형변환
	//컴퓨터가 이해하려면 숫자 형식이 편하기 때문에 문자도 숫자와 호환되게 된것.
	std::cout << (char)(ch + 32);

	return 0;
}