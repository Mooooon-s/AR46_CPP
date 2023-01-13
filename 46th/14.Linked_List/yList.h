#pragma once

struct NODE
{
	int		_data;
	NODE*	_next;
	NODE*	_prev;
};

NODE* head = nullptr;
NODE* tail = nullptr;

//����

void AddNode(int data) {
	//������ ��带 ���� ��
	if (head == nullptr) {
		head = new NODE();
		head->_data = data;
		head->_next = nullptr;
		head->_prev = nullptr;

		tail = nullptr;
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

//����
void DeleteNode(int data) {
	NODE* findNode = find(data);
	NODE* prev = findNode->_prev;
	NODE* next = findNode->_next;

	prev->_next = next;
	next->_prev = prev;

	//������ ���� �޸� ����
	delete findNode;
	findNode = nullptr;
}


//����
//����

//�޸� ����
void ReleaseNode() {
	NODE* p= tail;
	while (p != nullptr) {
		p = p->_prev;
		NODE* delNode = p;
		delete delNode;
		p = nullptr;
	}
}