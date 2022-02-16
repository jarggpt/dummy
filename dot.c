#include <stdio.h>

void dot(int w);

int main(){
  int l,i;
  printf("how long? ");
  scanf("%i", &l);
  for(int i=0;i<l;i++){
    dot(i);
  }
  return 0;
}

void dot(int w){
  for(int t=0; t<=w;t++){
    printf(" .");
  }
  printf("\n");
}
