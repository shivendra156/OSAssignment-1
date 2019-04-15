#include<stdio.h>
int main()
{
	int tc;
	double d;
	int tm;
	int mt;
	float c;
	int ans;
	scanf("Enter the time to service page fault when frame is empty %d",&tc);
	scanf("Enter the time to service modified page %d",tm);
	scanf("Enter the memory access time in nanoseconds %d",&mt);
	scanf("Enter the fraction of the time modified in decimal %f",&c);
	scanf("Enter the effectice access time in nanoseconds %d",&ans);
	d=(ans-mt)/(-mt+c*tm+tc-c*tc);
	printf("the maximum accepted fault rate for an given effective page time is  ",d);

}
