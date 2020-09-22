#include <iostream>
#include <cstdio>
#include <cstring>
#define max 1000
using namespace std;
int main()
{
    int a[max],b[max],c[max],i,lena,lenb,lenc;
    char a1[max],b1[max],t[max];
//   将整型数组全部清空
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
//  从键盘输入两个字符数组
    gets(a1);
    gets(b1);
//   求字符数组的长度
    lena = strlen(a1);
    lenb = strlen(b1);
//   我们在此处只是用大的数减小的数，所以我们需要在这里先进行判断。如果被减数比减数大的话我们需要交换两个字符串并且
   while ((lena<lenb)||(lena==lenb&&strcmp(a1,b1)<0))
   {
       strcpy(t,a1);
       strcpy(a1,b1);
       strcpy(b1,t);
       cout<<"-";
   }
//   字符数组转换为整型数组
    for (i=0;i<lena;i++)
        a[i] = a1[lena-i-1] - '0';
    for (i=0;i<lenb;i++)
        b[i] = b1[lenb-i-1] - '0';
    lenc=0;
    for (lenc = 0; lenc < lena ; lenc++)
    {
        if (a[lenc]<b[lenc])
        {
            a[lenc+1] = a[lenc+1] -1;
            a[lenc] = a[lenc] + 10;
        }
        c[lenc] = a[lenc] - b[lenc];
    }
    lenc--;
    while (c[lenc]==0) lenc=lenc-1;
    for (i = lenc; i >=0 ; i--)
        cout<<c[i];

}
