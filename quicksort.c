
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t s,e;
double tt;
void quickk(int arr[],int l,int h){
	if(l<h)
	{int pi=arr[l];
	
	int i=l,j=h,temp;
		while(i<j){
		while(arr[i]<=pi && i<=h && i<j)
			i++;
		while(arr[j]>pi )
			j--;
		if(i<j)
		{
			temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
	temp=arr[l];
		arr[l]=arr[j];
		arr[j]=temp;
		quickk(arr,l,j-1);
		quickk(arr,j+1,h);


} }
int main(){
	int arr[]={5,2,3,9,1,4,6,8,10,7};
	int hh=9;
	s=clock();
	quickk(arr,0,hh);
	e=clock();
	tt=(double)(e-s)/CLOCKS_PER_SEC;
	int ii;
	for(ii=0;ii<10;ii++)
	printf("%d  ",arr[ii]);
printf("\n %lf  ",tt);
return 0;
}