#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * 从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束
 * @return
 */
int main()
{
    FILE*fp=NULL;
    char str[50];
    int i,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]<='z'&&str[i]>='a')
            str[i]-=32;
    }
    if((fp=fopen("D:/Clion/projects/c_training/projects/examples100/demo098/result.txt","w"))==NULL)
    {
        printf("error: cannot open file!\n");
        exit(0);
    }
    fprintf(fp,"%s",str);
    fclose(fp);
    return 0;
}
