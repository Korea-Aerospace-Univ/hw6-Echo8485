#include <stdio.h>

int main() {
    int N;
    int a[20], b[20];
    int *p, *q;

    scanf("%d", &N);

    // 첫 번째 배열 입력
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    // 두 번째 배열 입력
    for (p = b; p < b + N; p++) {
        scanf("%d", p);
    }

    // a는 앞에서부터, b는 뒤에서부터
    p = a;
    q = b + N - 1;

    while (p < a + N) {
        printf(" %d", *p + *q);
        p++;
        q--;
    }

    return 0;
}
