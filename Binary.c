/*
    Imam Binary (imamB) functions for converting number to binary and vice versa
    
    Copyright (c) 2017 Md Imam Hossain

    This software is provided 'as-is', without any express or implied
    warranty.  In no event will the authors be held liable for any damages
    arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgment in the product documentation would be
       appreciated but is not required.
    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
    3. This notice may not be removed or altered from any source distribution.

    Md Imam Hossain
    emamhd@gmail.com
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
