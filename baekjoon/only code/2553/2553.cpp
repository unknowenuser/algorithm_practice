#include <iostream>

int main()
{
    int n;
    scanf("%d",&n);
    long* factorials = (long*)calloc((size_t)(n + 1),sizeof(long)),i = 1;
    factorials[0] = 1;
    factorials[1] = 1;
    while (i != n)
    {
        factorials[i + 1] = (factorials[i] * (i+1));
        while (factorials[i + 1] % 10 == 0)
        {
            factorials[i + 1]  /= 10;
        }
        factorials[i + 1] %= 100000000;
        i++;
    }
    printf("%ld",factorials[i]%10);
    return 0;
}