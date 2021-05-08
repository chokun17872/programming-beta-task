/*
    TASK: Prime
    LANG: CPP
    AUTHOR: Chavalvit Keartnattakorn
    SCHOOL: CRU
*/
#include <bits/stdc++.h>
using namespace std;
int a[8000000];
int main(){
	
	int i,j,n,cnt=1;
	for(i=3 ; i<8000000 ; i+=2){
		a[i] = 1;
	}
	for(i=3 ; i<sqrt(8000000) ; i+=2)
		if(a[i])
			for(j=i*i ; j<8000000 ; j+=i)
				a[j] = 0;
	scanf("%d",&n);
	if(n==1){
		printf("2\n");
		return 0;
	}
	for(i=3 ; i<8000000 ; i+=2){
		if(a[i]==1){
			cnt++;
			if(cnt==n){
				printf("%d\n",i); return 0;
			}
		}
	}		
	return 0;		
}
