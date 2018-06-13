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

#ifndef IMAMB_H
#define	IMAMB_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

/* 
 * Get binary representation of unsigned integers as a string
 * decimal is a pointer to unsigned integer
 * size is the size of unsigned integer in bits
 * returns a string representing binary which should be freed after use
 */
extern char *imam_decimal_to_binary(const void *decimal, uint8_t size);

/* 
 * Get unsigned integer number representation of a string containing binary
 * binary is a string containing binary number
 * size is the size of binary number in bits
 * returns an unsigned integer pointer containing decimal number of binary string which should be freed after use
 */
extern void *imam_binary_to_decimal(const char *binary, uint8_t size);

#ifdef __cplusplus
}
#endif

#endif	/* IMAMB_H */
