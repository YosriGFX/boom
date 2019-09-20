nclude <stdio.h>
/**
 * main - Entry point
 * Estimate Pi
 * Return: Always 0 (Success)
 */
int main(void)
{
float a, s, p ,c;
p = 0;
s = 0;
c = 0;
for (a = 1; a <= 9999; a+=2)
{
if (s == 0)
{
c = 1 / a;
p = p + c;
s = 1;
}
else
{
c = 1 / a;
p = p - c;
s = 0;
}
}
p = p*4 ;
printf("%f",p);
}
