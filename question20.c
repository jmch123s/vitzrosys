#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
 int random;
 int i , num;

 srand( time(NULL) );
 random = rand()%99+1;
 printf("임의의 숫자가 정해졌습니다 !! \n\n");
 printf("%d \n", random);

 for(i=0 ; i<20 ; i++)
 {
  printf("━━━━━━━[%d 번 남으셨습니다 ]\n",20-i);
  printf("숫자를 입력 :");
  scanf("%d", &num );
  if(num == random )
  {
   printf("\n\n랜덤숫자는 %d이고 %d번만에 맞추셨습니다  \n", random, i+1);
   printf("당신이 이기셨습니다 !! \n");
   return;
  }
  else
  {
   if(random < num){
    printf("%d 보다 작은 숫자입니다 \n", num);
   }
   else{
    printf("%d 보다 큰숫자입니다 \n",num);
   }
   printf("틀리셨습니다 \n");
  }
 }
 printf("COMPUTER의 승리입니다 \n");
}

