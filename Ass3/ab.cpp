#include <bits/stdc++.h>
using namespace std;


int main()
{
char c;
FILE *fp;
fp=fopen("myfile.txt","r");
clrscr();
while((c=fgetc(fp))!=EOF)
{
printf("\n%c",c);
printf("%d",fp->level);
}
fclose(fp);
return 0;
}
