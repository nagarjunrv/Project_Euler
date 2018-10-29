#include <stdio.h>

int main(){
	long cur = 2;
	long prv = 1;
	long temp;
	int i = 2;
	bool even = true;
	long sum = 0;
	long limit;
	scanf("%ld", &limit);
	for(; cur <= limit; i++){
		if(cur%2==0)
		//if(even)
		{
			sum += cur;
		}
		//even = !even;
		//sum += cur;
		temp = cur;
		cur += prv;
		prv = temp;
	}
	printf("%ld \n", sum);
}
