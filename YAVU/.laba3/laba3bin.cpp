#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
int main() {
char str_file[100];
FILE* fp = fopen("cppstudio.txt","rb");
 if(fp != NULL)
{
int i=0;
char ch;
while((ch = getc(fp)) != EOF)
str_file[i++]=ch;
str_file[i] = '\0';
printf(str_file);}
else printf("Невозможно открыть файл на чтение.\n");
fclose(fp);
return 0; }