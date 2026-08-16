#include<stdio.h>
int main(){
    int i,arr[10],x,f=0;
    for(i=0;i<10;i++){
        printf("enter a number");
        scanf("%d",&arr[i]);
    }

    printf("enter a number you want to search");
    scanf("%d",&x);

    for(i=0;i<10;i++){
        if(arr[i]==x){
            f=1;
            break;
        }
    }
    if(f!=0){
        printf("element found");
    }else{
        printf("element not found");

    }

    return 0;
}





// #include <stdio.h>

// int main()
// {
//     int a[100], n, i, key;
//     int low, high, mid;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements in ascending order:\n");
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     printf("Enter element to search: ");
//     scanf("%d", &key);

//     low = 0;
//     high = n - 1;

//     while(low <= high)
//     {
//         mid = (low + high) / 2;

//         if(a[mid] == key)
//         {
//             printf("Element found at position %d", mid + 1);
//             return 0;
//         }
//         else if(key < a[mid])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             printf("Element not found");
//         }
//     }

   

//     return 0;
// }