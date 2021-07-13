#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void ShellSort(ElementType a[],int n)
{
    int i,j,dk;
    ElementType tmp;
    for(dk=n/2; dk>0; dk/=2)
        for(i=dk; i<n; i++)
        {
            tmp=a[i];
            for(j=i; j>=dk; j-=dk)
                if(tmp<a[j-dk])
                    a[j]=a[j-dk];
                else break;
            a[j]=tmp;
        }
}
ElementType Median( ElementType A[], int N )
{
    ShellSort(A,N);
    return A[N/2];
}