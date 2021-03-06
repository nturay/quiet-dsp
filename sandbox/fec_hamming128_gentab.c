/*
 * Copyright (c) 2007 - 2015 Joseph Gaeddert
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//
// 2/3-rate (12,8) Hamming code encoding table generator
//

#include <stdio.h>
#include <stdlib.h>

#include "liquid.internal.h"

int main()
{
    unsigned int i;
    unsigned int c;

    printf("unsigned short int hamming128_enc_gentab[256] = {\n    ");

    for (i=0; i<256; i++) {
        // encode symbol
        c = fec_hamming128_encode_symbol(i);

        // print result
        printf("0x%.4x", c);
        if (i != 255)
            printf(", ");
        else
            printf("};");

        if ( ((i+1)%8) == 0)
            printf("\n    ");
    }
    printf("\n");

    return 0;
}

