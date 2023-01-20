#include <iostream>
// 재귀함수
// 자기 자신을 부르는 함수
// 무한 루프에 빠지기 쉬워서 잘 안 쓰려는 경향이 있다.
// 알고리즘 테스트에서 변별력으로 쓰는 경향이 있다.(중급자 골라내기)
// 가독성이 좋다.
// 트리랑 잘 어울린다.(dfs)
// 함수는 스택 메모리에 저장된다.
// stack overflow
//using namespace std;
//
//
//void run(int level) {
//	if (level == 3) {
//		return;
//		//나를 호출한 함수로 복귀
//	}
//	cout << "in"<<level<<"\n";
//	//DFS 깊이우선 탐색
//	//run(level + 1);
//	//run(level + 1);
//	
//	//i는 가지의 갯수
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

//중복방지(가지치기)
//대표적으로 2가지 방법
//#include<iostream>
//using namespace std;
//
////배열을 하나 추가함
//int visited['Z' + 1];
//int path[10];
//
//void run(int level) {
//	if (level == 3) {
//		for (int i = 0; i < level; i++) {
//			cout << path[i];
//		}
//		return;
//		//나를 호출한 함수로 복귀
//	}
//	
//	//i는 가지의 갯수
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


//링크드 리스트 순회
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


//길찾기
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
		//도착
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

