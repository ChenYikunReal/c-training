#include <stdio.h>
#include <stdlib.h>

/**
 * 从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止
 * @return
 */
int main() {
    FILE*fp=NULL;
    char filename[25];
    char ch;
    gets(filename);
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("error: cannot open file!\n");
        exit(0);
    }
    getchar();
    while((ch=getchar())!='#'){
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}
