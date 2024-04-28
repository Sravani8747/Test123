#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, sum);
    return 0;
}
int func_add(int c, int d)
{ 
  int a = c+d;
	return a;
//function added in branch1
int func_add(int c, int d)
{ 
	return c-d;
}
