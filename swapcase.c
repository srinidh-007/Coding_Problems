/* Change case of input*/

#include<stdio.h>
int main(){
	char s1[100];
	int i;
	scanf("%s",s1);
	for(i=0;s1[i];i++){
		if(s1[i]>=65 && s1[i]<=90)
			printf("%c",s1[i]+32);
		if(s1[i]>=97 && s1[i]<=122)
			printf("%c",s1[i]-32);
		else
			printf("%c",s1[i]);
	}
	return 0;
}
