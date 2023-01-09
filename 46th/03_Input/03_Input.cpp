#include <iostream>

using namespace std;
int main()
{
	int arr[5];
	int i = 5;
	while (i--) {
		cin >> arr[i];
	}
	i = 5;
	while (i--) {
		cout << ++arr[i] << " ";
	}
}