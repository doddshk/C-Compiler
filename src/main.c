#include <stdio.h>

int main(int argc, char* argv[]){
  FILE* fp;
  char buffer[1024];
  size_t bytes_read;

  fp = fopen(argv[1],"rb");
  if (fp == NULL){
    perror("Error opening file");
    return 1;
  }
  
  while ((bytes_read = fread(buffer, 1, 1024, fp)) > 0){
    printf("%.*s", (int)bytes_read, buffer);
  }

  fclose(fp);
  return 0;
}
