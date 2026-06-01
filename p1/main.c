#include <stdio.h>

int main(void) {
    char arr[10];//10개의 문자 저장
    char *p, *q;// p는 기준 문자 선택용, q는 배열 전체를 탐색하며 해당 문자의 빈도수를 
    char maxChar; //가장 많이 나올 문자 초기화
    int maxCount = 0;//최대 빈도수 저장

    // 10개의 영문자 입력
    for (p = arr; p < arr + 10; p++) {//p를 가리키는 문자 저장
        scanf(" %c", p);
    }

    // p는 기준 문자를 가리키고, q는 배열 전체를 순회하며 해당 문자의 빈도수를 계산
    for (p = arr; p < arr + 10; p++) {
        int count = 0;// 현재 문자(*p)의 등장 횟수

        for (q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }

        // 더 많이 나온 문자를 찾으면 갱신
        // 같은 빈도수면 먼저 나온 문자를 유지
        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        // count == maxCount인 경우는 무시하고 먼저 나온 문자가 유지됨
        
        }
    }

    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
