#include <stdio.h>
main()
{
int h1,h2,th,m1,m2,tm,s1,s2,ts;
printf("Enter time 1 in h:m:s format:\n");
scanf("%d %d %d",&h1,&m1,&s1);
printf("Enter time 2 in h:m:s format:\n");
scanf("%d %d %d",&h2,&m2,&s2);
ts=s1+s2;
tm=m1+m2;
th=h1+h2;
if(ts >=60)
{
    tm=tm+ts/60;
    ts= ts%60;
}
if(tm>=60)
{
    th=th+tm/60;
    tm=tm%60;
}
printf("Total time: %d:%d:%d",th,tm,ts);
}
