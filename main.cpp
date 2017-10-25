#include <bits/stdc++.h>
#include <pthread.h>

void* thread1(void* arg)
{
	printf("abc");
	printf("\n");
	return 0;
}

void* thread2(void* arg)
{
	printf("def");
	printf("\n");
	return 0;
}

int main ()
{
	printf("Hello\n");
	
	pthread_t t1, t2, t3;
	pthread_create(&t1, NULL, thread1, NULL);
	pthread_create(&t2, NULL, thread2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	printf("World!");
	return 0;
}
