#include<stdio.h>
#include<string.h>
void swap(char *a, char *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char *str, int p1, int p2){
    int i=0;
    if(p1 == p2){
        printf("%s\n",str);
    }
    else{
        for(i = p1; i <= p2; i++){
            swap((str + p1) , (str + i));
            permutation(str, p1 + 1, p2);
            swap((str + p1), (str + i));   
        }
        
    }
}
int main()
{
    char str[200];
    int n;
    printf("Enter the string:\n");
    scanf("%s",str);
    
    printf("The permutations are:\n");
    n = strlen(str);
    permutation(str,0,n-1);

    return 0;
}
