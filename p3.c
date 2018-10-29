#include <stdio.h>

int main(){
	long n;
	long longest_prime = 1; 
	scanf("%ld/n",&n);
	for(long i = 2; i <= n && n != 1; i++){
		while(n%i==0){
			longest_prime = i;
			n /= i;
		}
	}
	printf("%ld /n", longest_prime);
}
