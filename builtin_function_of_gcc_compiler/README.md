
# *_These are four important built-in functions in GCC compiler: _*
 

# __builtin_popcount(x): 

This function is used to count the number of one’s(set bits) in an integer. 

Example: 
if x = 4
binary value of 4 is 100
Output: No of ones is 1.

// C program to illustrate _builtin_popcount(x)
 
#include <stdio.h>
int main()
{
    int n = 5;
    
    printf("Count of 1s in binary of %d is %d ",
           n, __builtin_popcount(n));
    return 0;
}
 
Output: 
Count of 1s in binary of 5 is 2
 

# *_ Note: Similarly you can use __builtin_popcountl(x) & __builtin_popcountll(x) for long and long long data types. _*

# __builtin_parity(x): 
 This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity. 
Example: 
 
if x = 7
7 has odd no. of 1's in its binary(111).
Output: Parity of 7 is 1 
 

// C program to illustrate _builtin_parity(x)
 
#include <stdio.h>

int main()

{

    int n = 7;
     
    printf("Parity of %d is %d ",
           n, __builtin_parity(n));
    return 0;
}
 
Output: 
Parity of 7 is 1
 

# Note: Similarly you can use __builtin_parityl(x) & __builtin_parityll(x) for long and long long data types.
# __builtin_clz(x):
This function is used to count the leading zeros of the integer. 
# Note : clz = count leading zero’s 
Example: It counts number of zeros before the first occurrence of one(set bit). 
 
a = 16
Binary form of 16 is 00000000 00000000 00000000 00010000
Output: 27
 
// C program to illustrate __builtin_clz(x)

#include <stdio.h>

int main()

{

    int n = 16;
     
    printf("Count of leading zeros before 1 in %d is %d",
           n, __builtin_clz(n));
    return 0;
    
}
 
Output: 
Count of leading zeros before 1 in 16 is 27
 

# Note: __builtin_clz(x) This function only accept unsigned values 
# Note: Similarly you can use __builtin_clzl(x) & __builtin_clzll(x) for long and long long data types.
# __builtin_ctz(x): This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros. 
Example: Count no of zeros from last to first occurrence of one(set bit). 
 
a = 16
Binary form of 16 is 00000000 00000000 00000000 00010000
Output: ctz = 4
 

// C program to illustrate __builtin_ctz(x)

#include <stdio.h>

int main()

{

    int n = 16;
     
    printf("Count of zeros from last to first "
           "occurrence of one is %d",
           __builtin_ctz(n));
    return 0;
    
}
 
Output: 
Count of zeros from last to first occurrence of one is 4
 

# Note: Similarly you can use __builtin_ctzl(x) & __builtin_ctzll(x) for long and long long data types.
