#include <iostream>
// ����Լ�
// �ڱ� �ڽ��� �θ��� �Լ�
// ���� ������ ������ ������ �� �� ������ ������ �ִ�.
// �˰��� �׽�Ʈ���� ���������� ���� ������ �ִ�.(�߱��� ��󳻱�)
// �������� ����.
// Ʈ���� �� ��︰��.(dfs)
// �Լ��� ���� �޸𸮿� ����ȴ�.
// stack overflow
//using namespace std;
//
//
//void run(int level) {
//	if (level == 3) {
//		return;
//		//���� ȣ���� �Լ��� ����
//	}
//	cout << "in"<<level<<"\n";
//	//DFS ���̿켱 Ž��
//	//run(level + 1);
//	//run(level + 1);
//	
//	//i�� ������ ����
//	for (int i = 0; i < 4; i++) {
//		run(level + 1);
//	}
//
//	cout << "out"<<level<<"\n";
//	
//}
//
//int main() {
//	run(0);
//	return 0;
//}

//�ߺ�����(����ġ��)
//��ǥ������ 2���� ���
//#include<iostream>
//using namespace std;
//
////�迭�� �ϳ� �߰���
//int visited['Z' + 1];
//int path[10];
//
//void run(int level) {
//	if (level == 3) {
//		for (int i = 0; i < level; i++) {
//			cout << path[i];
//		}
//		return;
//		//���� ȣ���� �Լ��� ����
//	}
//	
//	//i�� ������ ����
//	for (int i = 0; i < 4; i++) {
//		if (visited[i] == 0) {
//			path[level] = i;
//			run(level + 1);
//			path[level] = 0;
//		}
//	}
//	
//}
//
//int main() {
//	run(0);
//	return 0;
//}


//��ũ�� ����Ʈ ��ȸ
//#include<iostream>
//
//struct Node {
//	Node* left;
//	Node* right;
//	int data;
//};
//
//void circulate(Node* p) {
//	if (p == nullptr) {
//		return;
//	}
//
//	std::cout << p->data << std::endl;
//	circulate(p->left);
//	circulate(p->right);
//
//}
//
//int main(void) {
//
//	Node* head = new Node;
//	head->data = 1;
//
//	head->left = new Node;
//	head->left->data = 2;
//	head->right = new Node;
//	head->right->data = 3;
//
//	head->left->left = new Node;
//	head->left->left->data = 4;
//	head->left->right = new Node;
//	head->left->right->data = 5;
//
//	head->right->left = new Node;
//	head->right->left->data = 6;
//	head->right->right = new Node;
//	head->right->right->data = 7;
//	circulate(head);
//	return 0;
//}


//��ã��
#include<iostream>
using namespace std;

int map[4][6] = {
	0,0,0,0,0,0,
	1,1,1,0,1,1,
	0,1,0,0,0,1,
	0,0,0,1,0,0
};

void run(int y, int x) {
	if (y < 0 || y>3 || x < 0 || x>5)
		return ;
	

	if (map[y][x]==1) {
		return;
	}
	
	map[y][x] = 2;

	if (y == 2 && x == 0) {
		//����
		int a=0;
	}

	run(y+1, x);
	run(y, x+1);
	run(y-1, x);
	run(y, x-1);

}

int main(void) {
	run(0, 0);
	return 0;
}

