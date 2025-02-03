include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARRAY_SIZE 100
int main(){
int n=0,i,j,k;
char str[ARRAY_SIZE];
//find out length of an string array
printf("enter the array:\n");
scanf("%s",str);
for(i=0;str[i]!='\0';i++){
n++;
}
printf("length of the array:%d",n);
printf("\n,\n STRING COMPARSION\n\n");
char str1[ARRAY_SIZE],str2[ARRAY_SIZE];
int check=0;
printf("enter the first array:\n");
scanf("%s",str1);
printf("enter the second array:\n");
scanf("%s",str2);
for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++,j++)
    if(str1[i]!=str2[j]){
    check=2;
    }
if(str1[i]=='\0'&&str2[j]=='\0'){
    check=1;
    }else{
    check=2;}
    if(check==2){
    printf("\n both strings are not equal\n");
    }else if(check==1){
    printf("\n both strings are equal\n");}
    printf("\n\n STRING CONCATENATION\n\n");
    printf("enter the first array:\n");
scanf("%s",str1);
printf("enter the second array:\n");
scanf("%s",str2);
printf("string1 is:%s\n",str1);
printf("string2 is:%s\n",str2);
for (i=0;str1[i]!='\0';i++){
    //do nothing
}
for(j=0;str2[j]!='\0';i++,j++){
    str1[i]=str2[j];
}
str1[i]='\0';
printf("\n final string is :%s",str1);
printf("\n\n STRING REVERSE\n\n");
printf("enter the array:\n");
scanf("%s",str1);
char result[ARRAY_SIZE];
for(i=0;str[i]!='\0';i++){
    //do nothing
}
i--;
for(j=0;i>=0;j++,i--){
    result[j]=str1[i];
}
result[j]='\0';
printf("\n final string is:%s",result);
return 0;

}
