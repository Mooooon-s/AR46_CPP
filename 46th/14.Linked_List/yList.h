#pragma once

struct NODE
{
	int		_data;
	NODE*	_next;
};

NODE* head = nullptr;

//생성

void AddNode(int data) {
	//최초의 노드를 만들 때
	if (head == nullptr) {
		head = new NODE();
		head->_data = data;
		head->_next = nullptr;
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

	}
}

//삭제

//삽입