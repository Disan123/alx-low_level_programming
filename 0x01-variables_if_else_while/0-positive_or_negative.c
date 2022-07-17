g#include <stdlib.h>                                     
1 #include <time.h>                                                                                              
2 include <stdio.h.                                                                                                                                                                                                      

3 /*										4 *main assign  a random number to the variable n each time it is executed and print out
										5 *based a condition
6 *Return: always 0          							7 */                                                                            
8 int main(void)
9
10 {  

11 int n;                                                                                                                             
		                                                               	12 srand(time(0)
13 n = rand() - RAND_MAX / 2;                                    		14 if (n > 0)                                                                   15         printf("%d is positive/n", n);
16 if n == 0)
17         printf("%d is zero/n", n);	
18 if (n < 0)
19 {
20         printf("%d is negative/n", n);
21 }
22 return (0)
23 }	
