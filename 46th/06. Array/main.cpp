#include <iostream>

int main() {

	//string = array of chars
	// 문자열에는 끝을 알리는 null 문자가 꼭 들어간다.
	char str2[6] = "ABCDE";
	std::cout << str2 << "\n";
	//null이 없으면 언제까지 출력해야 될지 몰라 쓰레기값을 되는데까지
	//출력한다.
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