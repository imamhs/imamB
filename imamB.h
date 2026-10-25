/*
    Imam Binary (imamB) functions for converting number to binary and vice versa
    
    Copyright (c) 2017 Md Imam Hossain

    See License for more information
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
