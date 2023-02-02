// 20.Inheritance.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//상속
//부모 클래스의 맴버 변수를 자식클래스에서도 할당해줌

//두가지 struct에 겹치는 부분이 생김
//상속을 쓰지않고 같은 효과를 내는방법
//포함관계
//겹치는 부분의 코드들을 따로 구조체를 만들어서 맴버변수로 만들면됨
struct Stat {
    int level;
    int hp;
};


class GameObject {

private:
    Stat stat;
    //기본적으로 클래스 외부에서는 사용이 불가능 하지만
    //상속받은 자식들은 사용이 가능함
protected:
    bool death;
public:
    void Damaged()
    {
        GameObject::stat.hp -= 10;
    }

    GameObject() {

    }

    virtual ~GameObject() {

    }
    //가상 함수를 선언 해주면 이 함수가 호출되면 자식의 같은 이름의 함수로 이동함
    virtual void shout() {

    }


};


//상속
//player은 자식 GameOnject는 부모
struct Player : public GameObject
{
    //int level;

    //int hp;
    int mp;
    int stamina;
public:
    void shout() override
    {
        std::cout << "i am player";
    }


};

struct Monster : public GameObject {
    //int level;

    //int hp;
    int stamina;
    void shout() override
    {
        std::cout << "i am Monster";
    }
};

//private로도 상속이 가능함
//보통 그냥 public으로 
class NPC : public GameObject {
    void Dead() {
        //모두 private로 들어오게됨
        death = false;
    }
public:
    NPC() {

    }

    ~NPC() {
    }

    void shout() override
    {
        std::cout << "i am Monster";
    }

};

//상속은 변수 뿐만 아니라 함수까지 가져가고 싶을 때
//코드를 여러번 쓰지 않고 한번만 써서 매우 편리하게 나옴
//코드를 두번치기 귀찮아서 쓰는 거임



int main()
{
    //Player P;
    //P.hP안됨 private로 보호 되어있으면 상속을 받더라도 접근할수없음
    //때문에 public으로 이루어져있는 함수 같은걸로 접근을 해야함
    //메모리 상에서는 부모꺼가 먼저 생성되고 그 후에 자식꺼가 먼저 생성됨
    //NPC npc;
    //npc. 아무 것도 접근이 안됨
    //private로 지정되어있기 때문에 접근이 안됨
    
    //생성과 소멸 주기
    //npc가  생성 될때 생성자로 가지만 상속됬을 경우 부모 클래스의 생성자를 실행후에 자식 생성자를 실행
    //소멸될때는 자식의 소멸자가 실행 되고 부모의 소멸자가 실행됨
    
    //제일 큰 장점
    //상속된 자식의 포인터 변수를 자동으로 형변환이 되어서 부모의 포인터 변수에 대입이 가능함
     NPC* npc = new NPC();
    GameObject* parent = npc;
    
    Monster* M =new Monster;
    Player* p =new Player;
    
    GameObject* allObject[3] = { npc, M, p };
    
    //상속을 이용하면 동시다발적인 처리를 사용이 가능함
    for(int i=0;i<3;i++){
        allObject[i]->Damaged();   
        allObject[i]->shout();
        //이거는 안됨 이미 GameObject형으로 변환이 되었기 때문에 사용이 불가능함
        //이거를 해결할수있게 해주는 것이 가상함수 virtualFunction
    
    }
    
    //가상함수를 만들면 메모리 어딘가에 가상함수 테이블이 생성됨
    //가상함수 테이블의 주소값을 부모클래스가 가지게됨
    //때문에 주소값의 크기만큼의 메모리가 늘어남
    //패딩이 이루어져서 메모리의 크기는 약간 차이날수 있음
    //가상함수 테이블에 저장되어있는 자식들의 함수 주소값을 이용해서 가상함수가 호출되면 맞는 주소를 찾아가서 그 함수를 
    
    //GameoBject형의 메모리를 삭제하기 때문에
    //제대로 삭제가 안됨
    for (int i = 0; i < 3; i++) {
        delete allObject[i];
    }
    //하위에 monster나 player들은 Gameobject를 상속받았기 때문에
    //소멸자도 가상함수로 만들어서 메모리 해제
    
    return 0;
}
