
#include <stdio.h>
#include <string.h>

void main(){
    char *num, *sum;
    int i;

    printf("Enter a number to check for palindrome: ");
    scanf("%s", num);

    for(i=0;i<=strlen(num)-1;i++){
        sum[i] = num[strlen(num)-1-i];
    }

    if(strcmp(sum, num))
        printf("%s is not a palindrome.\n", num);
    else
        printf("%s is a palindrome.\n", num);
}
