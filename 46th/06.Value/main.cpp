
//headers
#include <iostream>

//���� ����
//��𼭵� ���� ����.
//Ŭ���� ����� �ű⼭�� ���� �����ұ�?
//�ȵ�. script�� ������ ����. 

int gNum = 100;

int main()
{

	////���� ����
	//// only exists in region
	//int g = 0;
	//if (true) {
	//	g = 10;
	//}
	//int i;

	//{
	//	int a = 0;
	//}

	//������
	//���ڿ� = ""
	//���� = ''
	int num = 0;
	char ch = 'A';
	//������ ���ڷ�. char�̸� ����� �� char�� �°� 
	//2byte���� �츮 ���� ���ڸ� Ŀ���� �� ����.
	wchar_t wCh = 'L'; //2byte ¥��, ascii ��.
	std::cout << (sizeof(wchar_t));
	std::cout << ch + 32;
	//����ȯ
	//��ǻ�Ͱ� �����Ϸ��� ���� ������ ���ϱ� ������ ���ڵ� ���ڿ� ȣȯ�ǰ� �Ȱ�.
	std::cout << (char)(ch + 32);

	return 0;
}