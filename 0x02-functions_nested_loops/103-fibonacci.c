#include <stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{
unsigned long n1 = 0, n2 = 0, nsum;
float tot_sum;

while (1)
{
nsum = n1 + n2;
if (nsum > 1000000000)
break;
if (nsum % 2 == 0)
tot_sum += nsum;

n1 = n2;
n2 = nsum;
}
printf("%.0f\n", tot_sum);

return (0);
}
