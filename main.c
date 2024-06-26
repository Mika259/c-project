#include <stdio.h>
int main(){
	//var
    char nama1[10], nama2[10];
    //info messages
    puts("char(10)Nama pertama :");
    scanf("%s", &nama1);
    //""
    puts("char(10)Nama kedua :");
    scanf("%s", &nama2);
    //out from input
    printf("Nama kamu %s %s\n", nama1, nama2);
    return 0;
}