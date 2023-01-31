// 17.Operator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include <iostream>

struct Pos {
    int x;
    int y;
    //int z;

    //그냥 함수인데 함수이름이 기호인+=일 뿐임
    void operator+=(Pos other) {
        x += other.x;
        y += other.y;
        //z += other.z;
    }

    //사용할수있는 것이 한정되어있음
    //+ - * / = < > += -= *= /= << >>
    // <<= >>= == != <= >= ++ -- % & ^ ! |
    // ~ & -> && || [] ^= () %=
    // delete new new[] delete delete[]
};

class GameObject {
private:
    int _x;
    int _y;
    int _z;
    Pos _pos;
public:
    GameObject() {
        _pos = { 0,0 };
    }
public:
    void Move(/*GameObject* this*/int x, int y) {
        _x += x;
        _y += y;
    }
    void Move(int x, int y,int z) {
        _x += x;
        _y += y;
        _z += z;
    }

    //구조체만 수정하면 값이 하나 추가 되어도 클래스를 변경하지 않아도됨
    void Move(Pos pos) {
        _pos.x += pos.x;
        _pos.y += pos.y;
    }

    void Move(Pos pos) {
        _pos.x += pos.x;
        _pos.y += pos.y;
        //_pos.z += pos.z;

        //기본적으로 제공해주는 기능이 아님
        // _pos += pos;
        //이러한 기능을 구현하는 것을 연산자 오퍼레이터
        _pos += pos;
    }



};

int main()
{
    //this 포인터
    GameObject obj1;
    GameObject obj2;

    //객체는 어떻게 자신의 객체라는 것을 알까?
    //인자로 무조건 ㄴthis 포인터가 자동으로 들어감
    //void Move(/*GameObject* const this*/int x, int y)
    //인자로 자기자신의 주소를 가지고있음


    obj1.Move(Pos{ 1,2 });
    obj2.Move(Pos{ 1,2 });


    //obj.Move(Pos{2,2});

    int d = 0;
    //가리키고있는 놈의 값을 못바꿈
    const int* p = &d;

    //가리키고있는 대상을 바꿀수 없음
    int* const p = &d;

    //때문에 함수 뒤에 const를 붙이면 this의 값을 바꿀수 없어지기 때문에 
    //함수 뒤에 const를 붙이면 함수 내부의 값듫을 바꿀수 없음

    return 0;
}
