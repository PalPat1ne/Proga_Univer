#include <iostream>
#include <string>
#include <stdio.h> 
#include <string.h>
using namespace std;
int main() { 
int str_file[]= {67,56,43,87,90,23,-454,2,109,34}; 
FILE* fp = fopen("cppstudio.txt","wb"); 
if(fp != NULL)
{printf("norm");
for(int i=0; i < 10; i++) {putc(str_file[i],fp);
putc('\n',fp);}}
else printf("nenorm");
fclose(fp);
return 0; }
