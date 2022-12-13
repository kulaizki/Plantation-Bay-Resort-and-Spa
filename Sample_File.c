#include<stdio.h>

int main()
{
	int num;
    int *x;

    x = &num;
    printf("Enter your number: ");
    scanf("%d", x);

    patternNum(x);
    
    return 0;
}
int patternNum(int* px){
  int i, j, k;
  for(i=1;i<=*px;i++){
    for(j=1;j<=*px;j++){
        if(j!=*px)
        {
            printf("%d ", i);
        }
        else
        {
            k = i+1;
            printf("%d ", k);
        }
    }
    printf("\n");
  }
}
