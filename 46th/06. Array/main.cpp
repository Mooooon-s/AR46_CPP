#include <iostream>

int main() {

	//string = array of chars
	// ���ڿ����� ���� �˸��� null ���ڰ� �� ����.
	char str2[6] = "ABCDE";
	std::cout << str2 << "\n";
	//null�� ������ �������� ����ؾ� ���� ���� �����Ⱚ�� �Ǵµ�����
	//����Ѵ�.
	char str[5] = { 'A', 'B', 'C', 'D', 'E' };
	std::cout << str;

	int arr[5] = { 1,2,3,4,5 };
	int arr1[3][5] = {};

	int arr2[3][5] = {
		{ 1,2,3,4,5 },
		{ 1,2,3,4,5 },
		{ 1,2,3,4,5 }
	};
	
	return 0;
}