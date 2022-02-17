#include <stdio.h>

void dot(int w);

int main(){
  int l,i;
  system("clear");
  printf("how long? ");
  scanf("%i", &l);
  for(i=0;i<l;i++){
    dot(i);
  if(i==(l/2)+1){
    break;
  }
  }
  for(i=l/2;i>0;i--){
    dot(i);
  }
  return 0;
}

void dot(int w){
  for(int t=1; t<=w;t++){
    printf(" .");
  }
  printf("\n");
}
