#include <iostream>

using namespace std;

//��ȯ�� �̸� (��������)
//���ϰ��� �־����� ���� �ӽ� ������ ��������� �װ��� ��ȯ���� �Ǵ� ��.

//���𹮸� ���� �˸��� �������� �˸��� ������ ���߿� �� �� �ִ�.
//int Add(int a, int b);
//float Add(float a, float b);


//���ø� �Լ�
//�ڷ����� �޾ƿö� �ڵ����� �׿� �´� Ÿ������ ��������
template <typename T>
T Add(T a, T b) {
	return a + b;
}

//��������
//������ ������ ���Ҽ� ����
void print(int num, ...) {
	va_list VaList;
	__va_start(&VaList, num);

	//������ ������ �ٽ�
}

//caller
int main() {
	//�Լ���ǥ: ������

	//called
	int result = Add(1, 2);
	float fresult = Add(1.0f, 1.2f);

	cout << result<< " " << fresult;

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
