#include <stdio.h>

struct point
{
    int x;
    int y;
};

//�����Ĳ�����һ��ָ��ṹ���ָ�룬���ҷ���һ��ָ��ṹ���ָ��
struct point *getStruct(struct point *q);

void outStruct(struct point q);

int main(int argc, char const *argv[])
{
    struct point p = {1, 1};

    outStruct(*getStruct(&p));
    return 0;
}

struct point *getStruct(struct point *q)
{
    printf("��������ṹ���x, yֵ: ");
    scanf("%d", &q->x);
    scanf("%d", &q->y);

    return q;
}

void outStruct(const struct point q)
{
    printf("%d %d\n", q.x, q.y);
}