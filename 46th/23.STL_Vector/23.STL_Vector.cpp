// 23.STL_Vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//standard template Library
#include<vector>    //배열같은 거임
//std::vector<int> vector;

//FIFO
#include<queue>

//FILO
#include<stack>

//리스트임
#include<list>

//데이터를 key값으로 찾음
#include<map>           //tree형으로 들어가 있음, 자동 정렬이됨
#include<unordered_map> //배열형으로 들어감, 자동으로 정렬을 하지 않음
//std::map<int, std::string> map;

//데이터의 key값을 이용하지 않음
#include<set>
#include<unordered_set>
//std::set<std::wstring> set;

//EA에서 만든 라이브러리가 가장빠르다고 알려짐

#include <iostream>
#include<algorithm>
#include"mVector.h"
bool compare(int a, int b) {
    return a > b;
}

int main()
{
    std::vector<int> vector;
    vector.reserve(10); //메모리만 할당 10을 할당 했지만 실제로는 조금 더 할당함
    //실제로 메모리를 사용하지는 않음
    //데이터를 넣으면 그때부터 사용함
    vector.resize(15);//메모리 할당뿐만아니라 메모리를 실제로 사용하게 해줌
    //vector[0] = 100; //할당만 하고 실제로 넣지않았는데 사용하려고 하면 오류남

    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);
    vector.push_back(6);
    vector.push_back(7);
    vector.push_back(8);
    vector.push_back(9);
    vector.push_back(10);
    //어느정도 크기가 넘어가는 것을 용인해줌

    vector[3] = 100;

    //algorithm라이브러리에 존재
    std::sort(&vector[0], &vector[11]);
    //메모리를 할당할거 다 할당하고 맨 마지막에 하나 더 할당함

    //처음과 끝을 알려주는 함수
    //주소값을 반환함
    std::sort(vector.begin(),vector.end());

    //정렬방법을 따로 설정해줄수있음
    std::sort(vector.begin(), vector.end(),compare);
    //클래스나 string 등을 비교할때 사용할수있음

    vector.push_back(1);
    vector.pop_back();
    vector[0]=100;

    vector.clear();

    std::vector<int> vector1;
    vector1 = vector;


    for (int i = 0; i < vector.size(); i++) {
        std::cout << vector[i];
    }

    m::Vector<int> mVec;
    mVec.resize(10);
    mVec.push_back(1);
    mVec.push_back(2);
    mVec.pop_back();
    mVec[0]=200;
    m::Vector<int> mVec1;
    mVec1 = mVec;
    mVec.clear();




    return 0;
}
