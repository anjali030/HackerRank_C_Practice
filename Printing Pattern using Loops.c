/*
Printing Pattern
using Loops
In this problem, you need to print the pattern of the following form containing the numbers from to .
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
Input Format
The input will contain a single integer .
Constraints
Output Format
Print the pattern mentioned in the problem statement.
Sample Input 0
2
Sample Output 0
2 2 2
2 1 2
2 2 2
Sample Input 1
5
Sample Output 1
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
   {

    int n;
    scanf("%d", &n);
    int len = n*2 - 1,i,j;
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

