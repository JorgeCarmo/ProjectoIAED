#include <stdio.h>
#define DIM 100

int main(int ac, char **ficheiro){
  char text[DIM];
  int i=1, f,num;
  
  while (i<7){
    scanf("%s", text);
    f=strcmp(text, "#");
    if (f==0){
      printf("# invertido \n%s ", text);}
      else{
	printf("%s\n", text);
    
    }
    i=i+1;
  }
  while (scanf("%d", &num) != EOF){
/*int text2 = atoi(tex);*/
    num=255-num;
    printf("%d ", num);
  }
  
  
    
  return 0;
  
}