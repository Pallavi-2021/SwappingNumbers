//swapping numbers without a temporary variable
#include <stdio.h>
int main (void)
{
    int x = 10;
    int y = 20;

    printf("The values before swapping x=%d, y=%d\n", x,y);

    x = x+y; //value of x becomes 30
    y = x - y;  //here x takes the value 30,so 30-20 will give 10 ; y becomes 10
    x = x - y;  // here x is 30 and y is 10 , so by subratcting we get x = 20


    printf("The values after swapping  x=%d, y=%d", x,y);
    return 0;

}
