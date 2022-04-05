#include<stdio.h>
int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key){
        e=mid-1;
        }
        else{
            s=mid+1;
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
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int key;
        printf("enter key to be searched\n");
        scanf("%d",&key);
        printf("%d",binarySearch(arr,n,key));
        return 0;
    }
