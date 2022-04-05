#include<stdio.h>
int Linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int key,i;
    printf("enter key to be searched\n");
    scanf("%d",&key);
    printf("%d",Linearsearch(arr,n,key));
    return 0;
}
