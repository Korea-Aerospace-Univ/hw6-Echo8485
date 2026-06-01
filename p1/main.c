#include <stdio.h>

int main(void) {
    char arr[10];
    char *p, *q;
    char maxChar;
    int maxCount = 0;

    // 10개의 영문자 입력
    for (p = arr; p < arr + 10; p++) {
        scanf(" %c", p);
    }

    // 각 문자의 빈도수 확인
    for (p = arr; p < arr + 10; p++) {
        int count = 0;

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
        }
    }

    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
