#include<stdio.h>
int max(int a,int b)
{
	return(a>b)?a:b;
}
int knapsack(int wt[],int val[],int W,int n)
{
	if(n==0||W==0)
	return 0;
	if(wt[n-1]<=W)
	return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
	else
	return knapsack(wt,val,W,n-1);
}
int main()
{
	int wt[]={20,30,50};
	int val[]={40,80,110};
	int W=50;
	int n = sizeof(val) / sizeof(val[0]); 
    printf("%d", knapsack(wt,val,W,n)); 
    return 0; 
}
