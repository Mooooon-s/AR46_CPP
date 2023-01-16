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

//��� ����
void InsertNode(int data, int data1) {
	NODE* p = find(data1);		//data1�տ� ��带 �߰��ϱ� ���ؼ� data1�� ��带 ã��
	NODE* nextP = p;
	NODE* prevP = p->_prev;
	if (p->_prev == nullptr) {		//������ ��� �տ� �߰� �Ϸ��� �� ��
		head = p->_prev = new NODE;	//����� �տ� ��� ����(������ ��� �տ� �����ϱ� ������ ������ ��带 �ʱ�ȭ)
		p->_prev->_data = data;		//������ ��忡 �� �Է�
		p->_prev->_next = p;		//������ ���� ���� ��带 ����
	}
	else {
		p->_prev = new NODE;		//����� �տ� ��� ����
		p->_prev->_data = data;		//������ ��忡 �� �Է�
		p->_prev->_next = p;		//������ ���� ���� ��带 ����

	}

	if (prevP != nullptr) {
		prevP->_next = p->_prev;	//������ ����� ���� ���� ����
		p->_prev->_prev = prevP;	//������ ����� ���� ���� ������ ��带 ����
	}
	else {							//������ ��� �տ� �߰��Ϸ��� �� ��
		p->_prev->_prev = nullptr;	//������ ��� ���� ��尡 ����
	}
}




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