#include<stdio.h>
#include<string.h>
int main(){
  char a[100];
  int i,j;
  char b[100];

  printf("Enter your string :");
  scanf("%s",a);
  int len;
  len=strlen(a);
  j=0;
  for(i=len-1;i>=0;i--){
    b[j]=a[i];
    j++;
  }
  b[j]='\0';
  printf("the reverse of ur giver string : %s\n",b);
  if(strcmp(a,b)==0){
    printf("palindrome");
  }else{
  printf("not palindrome");
  }


return 0;
}
