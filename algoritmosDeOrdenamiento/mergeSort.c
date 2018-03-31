#include<stdio.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
int main()
{
    int a[30],n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    mergesort(a,0,n-1);
    
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        
    return 0;
}
 
void mergesort(int a[],int i,int j)//divide el array a la mitad
{
    int mid;// mid es la mitad del array
    // a es el array, i es el inicio del array y j es el final del array       
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);        //mitad izquierda
        mergesort(a,mid+1,j);    //mitad derecha
        merge(a,i,mid,mid+1,j);    //une las dos mitades
    }
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];    //array temporal
    int i,j,k;
    i=i1;    //inicio de la primera mitad del array
    j=i2;    //inicio de la segunda mitad del array
    k=0;
    
    while(i<=j1 && j<=j2) // mientras i sea mas pequeno o igual que el final de la primera mitad
                          // y j sea mas pequeno que el final de la segunda mitad, has lo siguiente
    {
        if(a[i]<a[j])// Este if es solo para la primera iteracion, cuando los arrays estan separados totalmente 
            temp[k++]=a[i++]; //si a[i] es mas pequeno que a[j] agrega primero el a[i]
        else
            temp[k++]=a[j++]; //si a[j] es mas pequeno que a[i] agrega primero el a[j]
    }
    
    while(i<=j1)// estos dos whiles son para el resto de los arrays, ya cuando se estan uninendo, es decir la segunda iteracion en adelante   
        temp[k++]=a[i++];
        
    while(j<=j2)    
        temp[k++]=a[j++];
        
    //Transferri elementos del temp[] al a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}