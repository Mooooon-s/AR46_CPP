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