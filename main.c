#include <stdio.h>

int accumulate(int value);

int main(void)
{
    int limit;
    int answer = 0;
    scanf("%d", &limit);
    if (limit < 1 || limit > 10)
    {
        printf("NG");
        return 0;
    }
    /* 2から2倍した入力値までの偶数を、関数に順に渡す。 */
    for (int index = 1; index <= limit; index++)
        answer = accumulate(index * 2);
    printf("%d", answer);
    return 0;
}

int accumulate(int value)
{
    /* staticの合計は呼び出しが終わっても保持され、初期化は最初の1回だけ行う。 */
    static int total = 0;
    total += value;
    return total;
}
