// 11.struct_And_Class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//class와 struct의 차이
//class 는 기본적으로 private
//struct는 기본적으로 public
//그외의 차이는 이제 없음 최대한 편의성에 따라서 사용


//데이터 타입을 직접 만들어서 사용해보자
struct Player {
    int hp;
    char a;
    int mp;
private:
    int st;
    
};
//원래 크기는 13바이트이지만
//보통 내가 할당한 제일 큰놈을 기준으로 메로리를 할당
//때문에 16바이트가 할당됨 (바이트 패딩)
//제일 큰 메모리에 여러개 할당이 가능하면 할당해서 
//메모리 계산이 조금 다름
//기본적으로 public이지만 private로 설정가능


class Monster {
public:
    void Setup(int hp) {
        //예외 처리가 가능
        if (hp > 100) {
            _hp = 100;
        }

        _hp = hp;

        //둘다 같음
        (*this)._hp;
        this->_hp;
    }

    //함수 뒤에 const 가 붙으면 함수 내부의 값을 변경할수없음
    void _Setup(int hp) const {
        int _hp = hp;
    }

private:
    int _hp;
    int mp;
};
//기본적으로 private 지만 public으로 설정가능
//다른 개발자가 함부로 사용 못하게 하려고


int main()
{
    Player p1, p2;

    p1.hp = 100;
    p2.hp = 100;
    // . 을 이용해서 초기화 가능

    Monster m1;
    //기본적으로 class는 값에 접근이 안됨 (캡슐화)
    //m1.hp = 0; <-접근이 불가능함
    m1.Setup(123456789);
    //this 포인터에 m1 주소가 들어감
    //this 는 한번 초기화 되면 바뀌지 않음
    //생성할때마다 초기화를 해야함

    Player const _this = p1;
    //값을 변경할수 없음
    const Player const _this = p1;
    //값도 변경할수 없고 주소도 변경할수없음


    std::cout << "Hello World!\n";
}
