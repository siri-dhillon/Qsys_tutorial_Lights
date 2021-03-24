//#include <time.h>
#define switches (volatile unsigned long int*) 0x0002000
#define leds (unsigned long int*) 0x0002010

unsigned long int sqrtSW(unsigned long int x)
{
	unsigned long int odd_num = 1, z = 0;
	unsigned long int sum = 0;
	while(sum < x)
	{
		z = z + 1;
		odd_num = odd_num + 2;
		sum = sum + odd_num;
	}
	return z;
}

// void main()
// {
	// while(1)
	// *leds = sqrtSW(*switches);
// }

void main()
{
	// clock_t begin = clock(); 
	unsigned long int a = 1, b;
	//int i = 0;
	while ( a < 4000000)
	{
		*leds = sqrtSW(a);
		//b = sqrtSW(a);
		a = a + 1023;
		//i++;
	}
	//clock_t end = clock();
	while(1)
	{
	*leds = *switches;
	}
	// unsigned long int time_spent = (end - begin)/1000000; 
	// int j = 0;
	// while( j<8000000000)
	// {	
	  // j++;
	// }
	// * leds = time_spent;
}
