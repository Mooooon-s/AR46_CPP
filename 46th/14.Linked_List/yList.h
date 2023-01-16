#pragma once

struct NODE
{
	int		_data;
	NODE*	_next;
	NODE*	_prev;
};

NODE* head = nullptr;
NODE* tail = nullptr;

//생성

void AddNode(int data) {
	//최초의 노드를 만들 때
	if (head == nullptr) {
		head = new NODE();
		head->_data = data;
		head->_next = nullptr;
		head->_prev = nullptr;

		tail = nullptr;
	}
	//노드가 하나 이상 존재할 때 
	else {
		//head->_next = new NODE();
		//head->_next->_data = data;
		//head->_next->_next = nullptr;

		NODE* p = head;
		while (p->_next != nullptr) {
			p = p->_next;
		}
		
		p->_next = new NODE();
		p->_next->_data = data;
		p->_next->_next = nullptr;
		p->_next->_prev = p;

		tail = p->_next;
	}
}

NODE* find(int data) {
	NODE* p = head;
	while (p->_next != nullptr) {
		if (data == p->_data)
		{
			return p;
		}
		p = p->_next;
	}
	return nullptr;
}

//삭제
void DeleteNode(int data) {
	NODE* findNode = find(data);
	NODE* prev = findNode->_prev;
	NODE* next = findNode->_next;

	prev->_next = next;
	next->_prev = prev;

	//연결을 끊은 메모리 삭제
	delete findNode;
	findNode = nullptr;
}


//삽입
//숙제

//노드 삽입
void InsertNode(int data, int data1) {
	NODE* p = find(data1);		//data1앞에 노드를 추가하기 위해서 data1의 노드를 찾음
	NODE* nextP = p;
	NODE* prevP = p->_prev;
	if (p->_prev == nullptr) {		//최초의 노드 앞에 추가 하려고 할 때
		head = p->_prev = new NODE;	//노드의 앞에 노드 생성(최초의 노드 앞에 생성하기 때문에 최초의 노드를 초기화)
		p->_prev->_data = data;		//생성된 노드에 값 입력
		p->_prev->_next = p;		//생성된 노드와 다음 노드를 연결
	}
	else {
		p->_prev = new NODE;		//노드의 앞에 노드 생성
		p->_prev->_data = data;		//생성된 노드에 값 입력
		p->_prev->_next = p;		//생성된 노드와 다음 노드를 연결

	}

	if (prevP != nullptr) {
		prevP->_next = p->_prev;	//생성된 노드의 앞의 노드와 연결
		p->_prev->_prev = prevP;	//생성된 노드의 앞의 노드와 생성된 노드를 연결
	}
	else {							//최초의 노드 앞에 추가하려고 할 때
		p->_prev->_prev = nullptr;	//생성된 노드 앞의 노드가 없음
	}
}




//메모리 해제
void ReleaseNode() {
	NODE* p= tail;
	while (p != nullptr) {
		p = p->_prev;
		NODE* delNode = p;
		delete delNode;
		p = nullptr;
	}
}