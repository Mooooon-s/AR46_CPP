#pragma once

struct NODE
{
	int		_data;
	NODE*	_next;
};

NODE* head = nullptr;

//����

void AddNode(int data) {
	//������ ��带 ���� ��
	if (head == nullptr) {
		head = new NODE();
		head->_data = data;
		head->_next = nullptr;
	}
	//��尡 �ϳ� �̻� ������ �� 
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

//����

//����