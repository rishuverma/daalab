
#include<stdio.h>
#include<string.h>
#define size 500
int badmatch(char pattern[],char var){
	int l=strlen(pattern);
	int i,table[size],j;
	for(i=0;i<size;i++){
		table[i]=l;
	}
	for(j=0;j<l-1;j++){
		table[(int)pattern[j]]=l-1-j;
	}
	int ret=table[(int)var];
	return ret;
}
int horspool(char p[],char src[]){
	int pl,sl;
	pl=strlen(p);
	sl=strlen(src);
	int index=pl-1;
	
	while(index<sl){
		//comp();
		int start=pl-1;
		while(start-->0){
			if(start==0||start==1)
				return index;
			else if(p[start]!=src[index])
				break;
			
			else
				index--;
		}
		index=index+badmatch(p,src[index])-1;
	}
	return 0;
}
int main(){
	char src[]="fftoothdcndsjlf";
	char p[]="tooth";
	/*printf("enter source: ");
	fgets(src,100,stdin);
	printf("enter pattern: ");
	fgets(p,100,stdin);*/
	if(horspool(p,src)==0)
		printf("\n not found");
	else
		printf("found at index %d",horspool(p,src));
	return 22;
}