#include <stdio.h>

void bsort(int* pi, size_t size);

int main(void)
{
    int a[10] = { 2, 56, 11, 1, 58, 23, 32, 43, 67, 15 };

    bsort(a, 10);

    for (size_t i = 0; i < 10; ++i)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void bsort(int* pi, size_t size)
{
    int temp;
    int flag;
    size_t i;

    i = 0;
    do {
        flag = 0;
        for (size_t k = 0; k < size - 1 - i; ++k) {
            if (pi[k] > pi[k + 1]) {
                flag = 1;
                temp = pi[k];
                pi[k] = pi[k + 1];
                pi[k + 1] = temp;
            }
        }
        ++i;
    } while (flag == 1);
}
