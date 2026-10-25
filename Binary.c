/*
    Imam Binary (imamB) functions for converting number to binary and vice versa
    
    Copyright (c) 2017 Md Imam Hossain
    See License for more information

*/

#include <stdio.h>
#include "imamB.h"

int main(int argc, char *argv[])
{
    /* decimal number */
    uint32_t number = 4109446745;
    /* binary number in string */
    char *binary = imam_decimal_to_binary (&number, 32);
    printf ("Binary of decimal number %u is: %s\n", number, binary);
    /* decimal number from binary string */
    uint32_t *number1 = (uint32_t *)imam_binary_to_decimal ("0000000000001011", 16);
    printf ("Decimal number of binary %s is: %u\n", "1011", *number1);
    /* free memories allocated by variables */
    free (binary);
    free (number1);
    
    return 0;   
}
