// 19.TemplateClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//T이외의 이름을 사용가능
//여러가지 타입을 할수있음

//가변인자도 사용가능
//template<typename T,typename ...>

template<typename T/*type name Q*/>
struct Pos{
    T add(){
      return x+y;  
    }
    
    T x;
    T y;
}

//템플릿 클래스 특수화(예외 처리 같이 사용)
//따로 처리하고 싶은 과정이 필요할 때
template<>
struct Pos<char>{
    char add(){
      return x+y;  
    }
    
    char x;
    char y;
}
//템플릿은 여러타입을 한번에 처리 하려고 사용하려는데
//이걸 사용한다는 것은 템플릿을 사용하지 않는다는 소리

/*
struct Pos{
    int x;
    int y;
};

struct uPos{
    unsigned int x;
    unsigned int y;
}

struct fpos{
    float x;
    float y;
}
*/
//형의 크기다 부족할때 마다 새로 만드는 것이 귀찮고 많아지면 관리가 힘듬
//그래서 이거를 이제 template를 이용해서 템플릿 클래스를 만듬


int main()
{
    
    Pos<int> pos;
    int ret = pos.add();
    
    Pos<float> pos2;
    float ret2 = pos2.add();
    
    return 0;
}

//단점
//일단 매우 어렵게 느껴짐 어려워져서 잘 안쓰게 
//해당 타입으로 컴파일을 할때 자동으로 작성을 해주기 때문에
//컴파일 시간이 오래걸림
//가독성이 떨어짐
//cpp파일에는 사용할수 없음
//템플릿은 무조건 헤더에서 사용해야함 다른데에서는 사용할수 없기 때문에 무조건 헤더에 사용해야함
//특정 코드를 템플릿을 이용하지 않고 사용하고 싶을때는 힘들다 like 글자
