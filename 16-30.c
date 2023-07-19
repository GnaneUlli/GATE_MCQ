//In first attempt I obtained 11 out of 14
16. Consider the following C-program:
int main ()
(GATE 2008)
{
int a = 2048, sum = 0;
foo (a, sum);
printf ("%d\n", sum);
getchar();
}
void foo(int n, int sum)
{
int k = 0, j = 0;
if (n == 0) return;
k = n % 10;
j = n / 10;
sum = sum + k;
foo (j, sum);
printf ("%d,", k);
}
What does the given program print?
(a) 8, 4, 0, 2, 14
(b) 8, 4, 0, 2, 0
(c) 2, 0, 4, 8, 14
(d) 2, 0, 4, 8, 0
  
17. What is printed by the following C program?
int f(int x, int *py, int **ppz)
{
int y, z;
**ppz += 1;
z = **ppz;
*py += 2;
y = *py;
x += 3;
return x + y + z;
}
void main()
{
int c, *b, **a;
(GATE 2010)
(GATE 2010)
c = 4;
b = &c;
a = &b;
printf( "%d", f(c,b,a));
getchar();
}
(a) 18
(b) 19
(c) 21
(d) 22
  
18. What does the following program print?
#include<stdio.h>
void f(int *p, int *q)
{
p = q;
*p = 2;
}
int i = 0, j = 1;
int main()
{
f(&i, &j);
printf("%d %d \n", i, j);
getchar();
return 0;
}
(a) 2 2
(b) 2 1
(c) 0 1
(d) 0 2
  
19. What is the value printed by the following C program?
#include<stdio.h>
int f(int *a, int n)
{
(GATE2011)
(GATE 2011)
if(n <= 0) return 0;
else if(*a % 2 == 0) return *a + f(a+1, n-1);
else return *a - f(a+1, n-1);
}
int main()
{
int a[] = {12, 7, 13, 4, 11, 6};
printf("%d", f(a, 6));
getchar();
return 0;
}
(a) -9
(b) 5
(c) 15
(d) 19
  
20. What does the following fragment of C-program print?
char c[] = "GATE2011";
char *p =c;
printf("%s", p + p[3] - p[1]) ;
(a) GATE2011
(b) E2011
(c) 2011
(d) 011
  
21. Consider the following recursive C function that takes two
arguments
unsigned int foo(unsigned int n, unsigned int r) {
if (n > 0) return (n%r + foo (n/r, r ));
else return 0;
}
What is the return value of the function foo when it is called foo(513,
2)?
(a) 9
(GATE 2012)
(GATE 2014)
(b) 8
(c) 5
(d) 2
  
22. What will be the output of the following C program segment?
char inchar = ‘A’;
switch (inchar)
{
case ‘A’ :
printf ("choice A \n") ;
case ‘B’ :
printf ("choice B ") ;
case ‘C’ :
case ‘D’ :
case ‘E’ :
default:
printf ("No Choice") ;
}
(a) No choice
(b) Choice A
(c) Choice A Choice B No choice
(d) Program gives no output as it is erroneous

23. Consider the following C program, what is the output generated?
int a, b, c = 0;
void prtFun (void);
int main ()
{
static int a = 1; /* line 1 */
prtFun();
a += 1;
prtFun();
printf ( "\t %d %d " , a, b) ;
}
void prtFun (void)
{
static int a = 2; /* line 2 */
(GATE 2014)
int b = 1;
a += ++b;
printf ( "\t %d %d " , a, b) ;
}
(a) 3 1 4 1 4 2
(b) 4 2 6 1 6 1
(c) 4 2 6 2 2 0
(d) 3 1 5 2 5 2
  
24. What will be the output of the following program?
#include<stdio.h>
int main(){
int a = 10;
a = (5 , 100);
printf("%d",a);
return 0;
}
(a) 10
(b) 5
(c) 100
(d) Compile Time Error.
  
25. Consider the following program in C language:
#include <stdio.h>
main()
{
int i;
int *pi = &i;
scanf("%d", pi);
printf("%d\n", i+5);
}
Which one of the following statements is TRUE?
(a) Compilation fails.
(b) Execution results in a run-time error.
(GATE 2014)
(GATE 2014)
(c) On execution, the value printed is 5 more than the address of
variable i.
(d) On execution, the value printed is 5 more than the integer value
entered.
  
26. Consider the function func shown below:
int func(int num)
{
int count = 0;
while (num)
{
count++;
num >>= 1;
}
return (count);
}
The value returned by func(435) is __________.

27. Consider the C function given below.
int f(int j)
{
static int i = 50;
int k;
if (i == j)
{
printf("something");
k = f(i);
return 0;
}
else return 0;
}
Which one of the following is TRUE?
(a) The function returns 0 for all values of j.
(b) The function prints the string something for all values of j.
(c) The function returns 0 when j = 50.
(GATE 2014)
(GATE 2014)
(d) The function will exhaust the runtime stack or run into an infinite
loop when j = 50
  
28. Consider the C function given below. Assume that the array listA
contains n (> 0) elements, sorted in ascending order.
int ProcessArray(int *listA, int x, int n)
{
int i, j, k;
i = 0;
j = n-1;
do{
k = (i+j)/2;
if (x <= listA[k])
j = k-1;
if (listA[k] <= x)
i = k+1;
} while (i <= j);
if (listA[k] == x)
return(k);
else
return -1;
}
Which one of the following statements about the function ProcessArray
is CORRECT?
(a) It will run into an infinite loop when x is not in listA.
(b) It is an implementation of binary search.
(c) It will always find the maximum element in listA.
(d) It will return -1 even when x is present in listA.

29. Consider the following function
double f(double x)
{
if (abs(x*x - 3) < 0.01) return x;
else return f(x/2 + 1.5/x);
}
Give a value q (to 2 decimals) such that f(q) will return q:____

Key:
16. d
17. b
18. d
19. c
20. c
21. d
22. c
23. c
24. c
25. d
26. 9
27. d
28. b
29. 1.732
