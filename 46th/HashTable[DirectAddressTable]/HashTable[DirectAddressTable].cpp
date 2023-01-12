// HashTable[DirectAddressTable].cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int bucket[521] = { };
    //key 값을 hash func에 넣어서 인덱스 값 찾아서 참조
    //매우 빠름
    //시간 복잡도는 O(1)

    char str[256] = "ABCDEFGHIJKLMN";

    for (unsigned int i = 0; i < 256; i++) {
        char ch = str[i];   //글자 자체가 hash index가 됨
        bucket[ch]++;
    }


    //정렬도 가능
    for (int i = 0; i < 512; i++) {
        if (bucket[i] != 0) {
            for (int j = 0; j < bucket[i]; j++) {
                std::cout << (char)i;
            }
        }
    }

    
    /*for (size_t i = 'A'; i < 'Z'; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 256; j++) {
            if (str[j] == i) {
                cnt++;
            }
        }
    }*/
    //매우 오래 걸림
    //for문을 A~Z까지 각각 256번 돌음;

    
}