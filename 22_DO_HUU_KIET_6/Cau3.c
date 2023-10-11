#include <stdio.h>
int main()
{
    int n, vt;
    int a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i<n;i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        vt = i;
    }
     
    int m = a[0];
    for(int i = 0; i<n;i++)
    {
        if(a[i] > m) m = a[i];
    }
    printf("\n\nPhan tu max la: %d", m);
    printf("\n Vi tri: %d", vt);
}