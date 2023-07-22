//Answers are provided below
//In first attempt I obtained 9 out of 15. 
1. Given a piece of code, define ‘s’ to be
struct node
{
int i;
float j;
};
struct node *s[10] ;
(a) An array, each element of which is a pointer to a structure of type
node
(b) A structure of 2 fields, each field being a pointer to an array of 10
elements
(c) A structure of 3 fields: an integer, a float, and an array of 10
elements
(d) An array, each element of which is a structure of type node.
  
2. The number of tokens in the following C statement are
printf("i = %d, &i = %x", i, &i);
(a) 3
(b) 26
(c) 10
(d) 21
  
3. Consider the following C declaration
struct {
short s [5]
union {
float y;
long z;
(GATE CS 2000)
(GATE CS 2000)
}u;
} t;
Assume that objects of the type short, float, and long occupy 2 bytes, 4
bytes, and 8 bytes, respectively. The memory requirement for variable t,
ignoring alignment considerations are:
(a) 22 bytes
(b) 14 bytes
(c) 18 bytes
(d) 10 bytes
  
4. The value of j at the end of the execution of the following C
program.
#include<stdio.h>
int incr (int i)
{
static int count = 0;
count = count + i;
return (count);
}
int main ()
{
int i,j;
for (i = 0; i <=4; i++)
j = incr(i);
return 0;
}
(a) 10
(b) 4
(c) 6
(d) 7
  
5. What will be the most appropriate matching for the following pairs
X: m=malloc(5); m= NULL; 1: using dangling
pointers
Y: free(n); n->value=5; 2: using uninitialized pointers
(GATE 2001)
(GATE CS 2002)
Z: char *p; *p = ’a’; 3. lost memory is:
(a) X—1 Y—3 Z-2
(b) X—2 Y—1 Z-3
(c) X —3 Y—2 Z-1
(d) X—3 Y—1 Z-2
  
6. Consider the following three C functions :
[PI] int * g (void)
{
int x = 10;
return (&x);
}
[P2] int * g (void)
{
int * px;
*px = 10;
return px;
}
[P3] int *g (void)
{
int *px;
px = (int *) malloc (sizeof(int));
*px = 10;
return px;
}
Which of the above three functions are likely to cause problems with
pointers?
(a) Only P3
(b) Only P1 and P3
(c) Only P1 and P2
(d) P1, P2, and P3

7. Consider the following declaration of a ‘two-dimensional array in
C:
char a[100][100];
(GATE CS 2002)
(GATE CS 2003)
(GATE CS 2003)
Assuming that the main memory is byte-addressable and that the array is
stored starting from memory address 0, the address of a[40][50] is
a) 4040
b) 4050
c) 5040
d) 5050
  
8. The C language is.
a) A context-free language
b) A context-sensitive language
c) A regular language
d) Parsable fully only by a Turing machine

9. Assume the following C variable declaration
int *A [10], B[10][10];
Of the following expressions
I A[2]
II A[2][3]
III B[1]
IV B[2][3]
which will not give compile-time errors if used as left-hand sides of
assignment statements in a C program?
a) I, II, and IV only
b) II, III, and IV only
c) II and IV only
d) IV only

10. Consider the C program shown below.
# include <stdio.h>
# define print(x) printf ("%d ", x)
void P(int *y)
{
int x = *y+2;
Q(x);
(GATE CS 2004)
*y = x-1;
print(x);
}
main(void)
{
x=5;
P(&x);
print(x);
getchar();
}
int x;
void Q(int z)
{
z += x;
print(z);
}
The output of this program is
a) 12 7 6
b) 22 12 11
c) 14 6 6
d) 7 6 6
  
11. Consider the following C program segment:
char p[20];
char *s = "string";
int length = strlen(s);
int i;
for (i = 0; i < length; i++)
p[i] = s[length — i];
printf("%s",p);
The output of the program is
a) gnirts
b) gnirt
c) string
d) no output is printed
(GATE CS 2004)
(GATE CS 2004)
(GATE CS 2004)

12. Consider the following C function
void swap (int a, int b)
{
int temp;
temp = a;
a = b;
b = temp;
}
In order to exchange the values of two variables x and y
a) call swap (x, y)
b) call swap (&x, &y)
c) swap (x,y) cannot be used as it does not return any value
d) swap (x,y) cannot be used as the parameters are passed by value

13. Consider the following C function:
int f(int n)
{
static int i = 1;
if (n >= 5)
return n;
n = n+i;
i++;
return f(n);
}
The value returned by f(1) is
a) 5
b) 6
c) 7
d) 8
  
14. Consider the following program fragment for reversing the digits in
a given integer to obtain a new integer. Let n = D1D2…Dm
int n, rev;
rev = 0;
(GATE CS 2004)
(GATE CS 2005)
while (n > 0)
{
rev = rev*10 + n%10;
n = n/10;
}
The loop invariant condition at the end of the ith iteration is:
a) n = D1D2….Dm-i and rev = DmDm-1…Dm-i+1
b) n = Dm-i+1…Dm-1Dm and rev = Dm-1….D2D1
c) n \not = rev
d) n = D1D2….Dm and rev = DmDm-1…D2D1

15. Consider the following C function:
main()
{
int x, y, m, n;
scanf ("%d %d", &x, &y);
/* x > 0 and y > 0 */
m = x; n = y;
while (m != n)
{
if(m>n)
m = m - n;
else
n = n - m;
}
printf("%d", n);
}
The program computes
a) x + y using repeated subtraction
b) x mod y using repeated subtraction
c) the greatest common divisor of x and y
d) the least common multiple of x and y

Key : 
1. a
2. c
3. c
4. a
5. d
6. c
7. b
8. a
9. a
10. a
11. d
12. d
13. c
14. a
15. c
