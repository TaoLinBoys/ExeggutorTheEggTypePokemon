#include <unistd.h>
#include <string.h>
#include <stdio.h>
void main(){
  char string[60];
  printf("insert command: ");
  fgets(string,sizeof(string),stdin);
  printf("%s" , string);
  strsep(&string," ");
  
  
}
