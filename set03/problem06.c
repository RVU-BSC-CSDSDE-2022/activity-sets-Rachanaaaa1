#include<stdio.h>
#include<string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);


int main(){
  char string[50];
  char substring[50];
  input_string(string , substring);
  int index;
  index = sub_str_index(string,substring);
  output(string,substring,index);
  return 0;
  }

void input_string(char* a, char* b){
  printf("Enter the a string : \n");
  scanf("%s",a);
  printf("Enter the b substring : \n");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring){
  int i,j,index,position;
  for(i = 0;string[i] != '\0' ; i++){
    index = 0;
    j = i;
    while(string[j] == substring[index]){
      position = i;
      j++;
      index++;
    }
    if(substring[index] == '\0'){
      break;
    }
  }
  return index;
}

void output(char *string, char *substring, int index){
  
printf("the index of %s in %s is %d",substring,string,index);
  }