#include <stdio.h>

int main(int argc, char* argv[]){
  FILE* fp;
  char buffer[1024];
  size_t bytes_read;

  // Open the file defined in the second argument
  fp = fopen(argv[1],"rb"); 
  if (fp == NULL){
    perror("Error opening file");
    return 1;
  }
  
  // Reads file to buffer string, prints buffer string.
  while ((bytes_read = fread(buffer, 1, 1024, fp)) > 0){
    printf("%.*s", (int)bytes_read, buffer);
  }
  
  // Closes the fp file pointer
  fclose(fp);
  return 0;
}
