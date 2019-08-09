#include <stdio.h>

int main() 
{
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
       

int cycleSize(int a) {
    int cycle = 1;

    while (a != 1) {
        if (a % 2 == 0) 
         {
            a = a / 2;
        }
        else
        { 
            a = a * 3 + 1;
        }
        ++cycle;
    }
    return cycle;
}

int maxCycleSize(int num1, int num2) {
   
    int maxCycle = 0;
    
    for (num1; num1 <= num2; num1++) 
       {
        int thisCycleSize = cycleSize(num1);

        if (thisCycleSize > maxCycle) 
        {
            maxCycle = thisCycleSize;
        }
    }
    return maxCycle;
}
 printf("%d %d %d\n", num1, num2, maxCycleSize(num1, num2));

 return 0;
}

