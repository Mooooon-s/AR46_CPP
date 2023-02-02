// 22.FileIO.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int a = 0;
    int* p = new int;

    //메모리는 컴퓨터가 꺼지면 나라감 (RAM)
    //이거를 저장하기 위해서 SSD나 외장하드에 저장함
    FILE* file=nullptr;
    //파일 위치
    //C:\Users\assor\OneDrive\문서\GitHub\AR46_CPP\46th\TEST.txt
    //파일을 해당 위치에서 "읽기"모드로 열기
    //fopen_s(&file, "C:\\Users\\assor\\OneDrive\\문서\\GitHub\\AR46_CPP\\46th\\TEST.txt", "r");
    
    //읽기 쓰기 등 여러가지가 있음
    //char buffer[256] = {0,};
    //fread(buffer, 1, 128, file);//전체 읽기
    
    
    //파일을 쓰기 모드로
    //파일이 존재하지않으면 파일을 생성하고 파일을 열음
    fopen_s(&file, "C:\\Users\\assor\\OneDrive\\문서\\GitHub\\AR46_CPP\\46th\\TEST.txt", "w");
    
    fwrite("1234567", 1, 128, file);

    //메모리상에 올라와 있기 때문에 
    //파일을 반드시 메모리에서 삭제 해줘야함
    fclose(file);
    return 0;
}