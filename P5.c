#include <stdio.h>
#include <stdlib.h>
void TOH(int n,char source,char temp,char destination)
{
    if(n==1){
        printf("move disc 1 from %c ->%c\n",source,destination);
        return;
    }
    TOH(n-1,source,destination,temp);
    printf("move disc %d from %c ->%c\n",n,source,destination);
    TOH(n-1,temp,source,destination);
}

int main()
{
    int n;
    printf("enter number of disc");
    scanf("%d",&n);
    printf("\nsequence of moves:\n");
    TOH(n,'S','T','D');
    int totalmoves=(1<<n)-1;
    printf("\ntotal number of moves = %d\n",totalmoves);
    return 0;
}
