	#include<stdio.h>
int complete(int n) {
	int sum = 0;
	for(int j=1; j<=n/2; j++) {
		if(n%j == 0) {
			sum = sum+j;
		}
	}
	if(sum==n) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	int s = 0;
	for(int i=1; i<=100; i++) {
		if(complete(i))
			s += i;
	}
	printf("%d", s);
}