#include <stdio.h>
void main()
{
    int a, n, s = 0, t;
    printf("����a��n��");
    scanf("%d%d", &a, &n);
    t = a; //t = a1
    printf("s=");
    while (n > 0)
    {
        printf("%d", t); //��ʾÿ����ӵ���
        s += t;
        a = a * 10; //ÿ��a2����10������a1
        t = t + a;  //t = an;ûѭ��һ��n+1��
        n--;
        if (n != 0)
            printf("+");
    }
    printf("=%d", s);
}
