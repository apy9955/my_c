// Display this AP -1,3,5,7,9.......n upto 'n'

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the n term : ");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2)
//             printf("%d ",i);
//     return 0;
// }

// we are going to use extra variable

#include<stdio.h>
int main(){
    int n;
    printf("Enter the n term : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+2;
    }
    return 0;
}