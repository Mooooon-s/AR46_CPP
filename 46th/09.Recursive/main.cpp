#include <iostream>
// ����Լ�
// �ڱ� �ڽ��� �θ��� �Լ�
// ���� ������ ������ ������ �� �� ������ ������ �ִ�.
// �˰��� �׽�Ʈ���� ���������� ���� ������ �ִ�.(�߱��� ��󳻱�)
// �������� ����.
// Ʈ���� �� ��︰��.(dfs)
// �Լ��� ���� �޸𸮿� ����ȴ�.
// stack overflow
using namespace std;


void run(int level) {
	if (level == 3) {
		return;
		//���� ȣ���� �Լ��� ����
	}
	cout << "in"<<level<<"\n";
	//DFS ���̿켱 Ž��
	//run(level + 1);
	//run(level + 1);
	
	//i�� ������ ����
	for (int i = 0; i < 4; i++) {
		run(level + 1);
	}

	cout << "out"<<level<<"\n";
	
}

int main() {
	run(0);
	return 0;
}