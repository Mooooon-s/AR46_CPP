#include <iostream>

using namespace std;

//반환값 이름 (전달인자)
//리턴값은 주어지기 전에 임시 변수가 만들어지고 그것이 반환값이 되는 것.

//선언문만 먼저 알리면 존재함을 알리기 때문에 나중에 쓸 수 있다.
//int Add(int a, int b);
//float Add(float a, float b);


//템플릿 함수
//자료형을 받아올때 자동으로 그에 맞는 타입으로 지정해줌
template <typename T>
T Add(T a, T b) {
	return a + b;
}

//가변인자
//인자의 갯수가 변할수 있음
void print(int num, ...) {
	va_list VaList;
	__va_start(&VaList, num);

	//포인터 공부후 다시
}

//caller
int main() {
	//함수목표: 가독성

	//called
	int result = Add(1, 2);
	float fresult = Add(1.0f, 1.2f);

	cout << result<< " " << fresult;

	return 0;
}

//자세한 내용 알려주기.
//int Add(int a, int b) {
//	//함수내 변수들은 cpu 안 레지스터 안에 저장된다.
//	//a, b,는 지역 변수라 함수 외 변수들에게 영향을 주지 않는다.
//	//애초에 구분하면 좋다. 전달인자들은 앞에 _를 주는 경우도 많다.
//
//	return a + b;
//}
//
//float Add(float a, float b) {
//	//함수 오버로딩
//	// 가독성을 높여 줌
//	//함수는 이름이 같아도 전달인자의 자료형이 달라진다면 다른 함수로 본다.
//	
//	return a + b;
//}



//재귀함수
//자기 자신을 부르는 함수.
