#include <stdio.h>

int main(){
  FILE *filePtr;
  filePtr = fopen("a.in", "r");
  
  if(filePtr == NULL){
    perror("fopen failed");
    return 1;
  }

}
