#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* �洢������� */
    PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

int FactorialSum( List L );

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Factorial(int N){
    int factorial=1;
    for (int i=1;i<=N;i++){
        factorial*=i;
    }
    return factorial;
}
int FactorialSum( List L ){
    int sum=0;
    while(L!=NULL){
        sum+=Factorial(L->Data);
        L=L->Next;
    }
    return sum;
}