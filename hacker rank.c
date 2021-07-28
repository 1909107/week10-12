/*In this challenge, you will learn to implement the basic functionalities of pointers in C. A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable that it does not own.
*/
#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) 
{
   
    int x,y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b =abs(y); 
   
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
