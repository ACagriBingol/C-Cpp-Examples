#include <stdio.h>
int main()
{
  int b[6];
  int *bPtr;
  int i,sum=0;

  bPtr=b;  // or bPtr=&b[0]
  
  
  printf("Enter 6 numbers:\n");
  for(i = 0; i < 6; ++i)
  {
      // (classes + i) is equivalent to &classes[i]
      scanf("%d",bPtr + i);

      // *(classes + i) is equivalent to classes[i]
      sum += *(bPtr + i);
  }
  printf("Sum = %d", sum);
  return 0;
}
