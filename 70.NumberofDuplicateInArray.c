#include <stdio.h> 
#include <string.h>

void ArrayChallenge(int arr[], int arrLength) {

  int temp,bigcnt,i,j,k;
  int cnt[arrLength];

  for(i=0;i<arrLength;i++){
    temp=arr[i];
    for(j=0;i<arrLength;j++){
      if(temp==arr[j]){
        cnt[i]=cnt[i]+1;
      }
    }
  }

  bigcnt=cnt[0];
  for(k=1;k<arrLength;k++){
    if(bigcnt<cnt[k]){
      bigcnt=cnt[k];
    }
  }

  // code goes here  
  printf("%d", bigcnt);
    
}

int main(void) { 
   
  // keep this function call here
  int A[] = {0,-2,-2,5,5,5};
  int arrLength = sizeof(A) / sizeof(*A);
  ArrayChallenge(A, arrLength);
  return 0;
    
}
