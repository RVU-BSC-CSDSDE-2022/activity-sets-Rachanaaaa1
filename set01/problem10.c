#include <stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main()
{
  char string1[20], string2[20];
  input_two_strings(&string1,&string2);
}
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string:\n");
  if(scanf("%s",string1));
  printf("Enter the second string:\n");
  if(scanf("%s",string2));
  stringcompare(string1,string2);
}
int stringcompare(char *string1, char *string2)
{
  int var=0,i=0;
  while(string1[i] !='\0'&& string2[i] !='\0')
    {
      if(string1[i]>string2[i])
      {
        var=1;
        break;
      }
      else if(string2[i]>string1)
      {
        var=-1;
        break;
      }
      i++;
    }

  if(var==1)
  {
    printf("The first string %s is greater than the second string %s",string1,string2);
    }
  else if(var==-1)
  {
    printf("The second string %s is greater than the first string %s",string2,string1);
  }
  return 0;
  int result=stringcompare(string1,string2);
  output(string1,string2,result);
  }
void output(char *string1, char *sring2, int result)
{
  printf("The output is %d",result);
} 
  
  




