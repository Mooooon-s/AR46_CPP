#include <iostream>
// 재귀함수
// 자기 자신을 부르는 함수
// 무한 루프에 빠지기 쉬워서 잘 안 쓰려는 경향이 있다.
// 알고리즘 테스트에서 변별력으로 쓰는 경향이 있다.(중급자 골라내기)
// 가독성이 좋다.
// 트리랑 잘 어울린다.(dfs)
// 함수는 스택 메모리에 저장된다.
// stack overflow
using namespace std;


void run(int level) {
	if (level == 3) {
		return;
		//나를 호출한 함수로 복귀
	}
	cout << "in"<<level<<"\n";
	//DFS 깊이우선 탐색
	//run(level + 1);
	//run(level + 1);
	
	//i는 가지의 갯수
	for (int i = 0; i < 4; i++) {
		run(level + 1);
	}

	cout << "out"<<level<<"\n";
	
}

int main() {
	run(0);
	return 0;
}