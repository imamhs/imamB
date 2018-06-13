/*
    Imam Binary (imamB) functions for converting decimal number to binary and vice versa
    
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

#include "imamB.h"

char *imam_decimal_to_binary(const void *decimal, uint8_t size)
{
    char *binary_string = NULL;
    if (size == 8)
    {
        uint8_t temp_number = *(uint8_t *)decimal;
        uint8_t bit_tester = 1 << (size-1);
        uint8_t bit_counter;
        binary_string = (char *)malloc(size+1);
        if (!binary_string) return NULL;
        for (bit_counter=0; bit_counter < size; bit_counter++)
        {
            if ((temp_number & bit_tester) == bit_tester) strcat(binary_string, "1");
            else strcat(binary_string, "0");
            bit_tester = bit_tester >> 1;
        }
        strcat(binary_string, "\0");
        return binary_string;
    }
    else if (size == 16)
    {
        uint16_t temp_number = *(uint16_t *)decimal;
        uint16_t bit_tester = 1 << (size-1);
        uint8_t bit_counter;
        binary_string = (char *)malloc(size+1);
        if (!binary_string) return NULL;
        for (bit_counter=0; bit_counter < size; bit_counter++)
        {
            if ((temp_number & bit_tester) == bit_tester) strcat(binary_string, "1");
            else strcat(binary_string, "0");
            bit_tester = bit_tester >> 1;
        }
        strcat(binary_string, "\0");
        return binary_string;
    }
    else if (size == 32)
    {
        uint32_t temp_number = *(uint32_t *)decimal;
        uint32_t bit_tester = 1 << (size-1);
        uint8_t bit_counter;
        binary_string = (char *)malloc(size+1);
        if (!binary_string) return NULL;
        for (bit_counter=0; bit_counter < size; bit_counter++)
        {
            if ((temp_number & bit_tester) == bit_tester) strcat(binary_string, "1");
            else strcat(binary_string, "0");
            bit_tester = bit_tester >> 1;
        }
        strcat(binary_string, "\0");
        return binary_string;
    }
    else if (size == 64)
    {
        uint64_t temp_number = *(uint64_t *)decimal;
        uint64_t bit_tester = 1 << (size-1);
        uint8_t bit_counter;
        binary_string = (char *)malloc(size+1);
        if (!binary_string) return NULL;
        for (bit_counter=0; bit_counter < size; bit_counter++)
        {
            if ((temp_number & bit_tester) == bit_tester) strcat(binary_string, "1");
            else strcat(binary_string, "0");
            bit_tester = bit_tester >> 1;
        }
        strcat(binary_string, "\0");
        return binary_string;
    }
    else return NULL;
}

void *imam_binary_to_decimal(const char *binary_string, uint8_t size)
{
    if (strlen(binary_string) == 0 || binary_string == NULL) return NULL;
    
    if (size == 8)
    {
        uint8_t bit_counter;
        uint8_t *temp_number = NULL;
        uint8_t size_in_bytes = size/8;
        temp_number = (uint8_t *)malloc(size_in_bytes);
        if (!temp_number) return NULL;
        memset(temp_number, '\0', size_in_bytes);
        for (bit_counter=size-1; bit_counter != 255; bit_counter--)
        {
            if (binary_string[bit_counter] == '1') *temp_number = *temp_number | (1 << ((size-1) - bit_counter));
        }
        return (uint8_t *)temp_number;
    }
    else if (size == 16)
    {
        uint8_t bit_counter;
        uint16_t *temp_number = NULL;
        uint8_t size_in_bytes = size/8;
        temp_number = (uint16_t *)malloc(size_in_bytes);
        if (!temp_number) return NULL;
        memset(temp_number, '\0', size_in_bytes);
        for (bit_counter=size-1; bit_counter != 255; bit_counter--)
        {
            if (binary_string[bit_counter] == '1') *temp_number = *temp_number | (1 << ((size-1) - bit_counter));
        }
        return (uint16_t *)temp_number;
    }
    else if (size == 32)
    {
        uint8_t bit_counter;
        uint32_t *temp_number = NULL;
        uint8_t size_in_bytes = size/8;
        temp_number = (uint32_t *)malloc(size_in_bytes);
        if (!temp_number) return NULL;
        memset(temp_number, '\0', size_in_bytes);
        for (bit_counter=size-1; bit_counter != 255; bit_counter--)
        {
            if (binary_string[bit_counter] == '1') *temp_number = *temp_number | (1 << ((size-1) - bit_counter));
        }
        return (uint32_t *)temp_number;
    }
    else if (size == 64)
    {
        uint8_t bit_counter;
        uint64_t *temp_number = NULL;
        uint8_t size_in_bytes = size/8;
        temp_number = (uint64_t *)malloc(size_in_bytes);
        if (!temp_number) return NULL;
        memset(temp_number, '\0', size_in_bytes);
        for (bit_counter=size-1; bit_counter != 255; bit_counter--)
        {
            if (binary_string[bit_counter] == '1') *temp_number = *temp_number | (1 << ((size-1) - bit_counter));
        }
        return (uint64_t *)temp_number;
    }
    else return NULL;
}

