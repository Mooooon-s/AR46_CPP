#include <iostream>
#include<stdio.h>
#include<stdarg.h>

using namespace std;

//��ȯ�� �̸� (��������)
//���ϰ��� �־����� ���� �ӽ� ������ ��������� �װ��� ��ȯ���� �Ǵ� ��.

//���𹮸� ���� �˸��� �������� �˸��� ������ ���߿� �� �� �ִ�.
//int Add(int a, int b);
//float Add(float a, float b);


//���ø� �Լ�
//�ڷ����� �޾ƿö� �ڵ����� �׿� �´� Ÿ������ ��������
//�����Ҵ� ��� �����Ϸ��� �� ���� �´� �ڵ带 �̸� �ۼ� �� ������
//������ ����� ��� �Ұ��� �ϴ�.
//�����ϴµ� �ð��� �ɷ��� ���尡 ������
template <typename T>
T Add(T a, T b) {
	return a + b;
}

//Ÿ���� �̸��� ����
typedef int MYINT;

//��������
//������ ������ ���Ҽ� ����
void print(int num, ...) {
	va_list VaList;
	__crt_va_start(VaList, num);
	cout << sizeof(VaList);
	for (int i = 0;i < sizeof(VaList);i++) {
		int output = va_arg(VaList, int);
		std::cout << output;
	}

	va_end(VaList);
	//������ ������ �ٽ�
}

//caller
int main() {
	//�Լ���ǥ: ������

	//called
	int result = Add(1, 2);
	float fresult = Add(1.0f, 1.2f);

	cout << result<< " " << fresult<<"\n";

	print(1, 2, 3, 4, 5, 7, 9, 6, 3);

	return 0;
}

//�ڼ��� ���� �˷��ֱ�.
//int Add(int a, int b) {
//	//�Լ��� �������� cpu �� �������� �ȿ� ����ȴ�.
//	//a, b,�� ���� ������ �Լ� �� �����鿡�� ������ ���� �ʴ´�.
//	//���ʿ� �����ϸ� ����. �������ڵ��� �տ� _�� �ִ� ��쵵 ����.
//
//	return a + b;
//}
//
//float Add(float a, float b) {
//	//�Լ� �����ε�
//	// �������� ���� ��
//	//�Լ��� �̸��� ���Ƶ� ���������� �ڷ����� �޶����ٸ� �ٸ� �Լ��� ����.
//	
//	return a + b;
//}



//����Լ�
//�ڱ� �ڽ��� �θ��� �Լ�.
