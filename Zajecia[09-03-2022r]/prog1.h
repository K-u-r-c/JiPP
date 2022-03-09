//
//  prog1.h
//  JiPP
//
//  Created by Jakub Kurc on 09/03/2022.
//

#ifndef prog1_h
#define prog1_h
#endif /* prog1_h */

#include <stdio.h>
#include <limits.h>

#ifndef FLT_MIN
#include <float.h>
#endif

#ifndef __int64
#define __int64 long long
#define __INT64_MIN LLONG_MIN
#define __INT64_MAX LLONG_MAX
#endif

int prog1(void) {
    
    printf("int |Rozmiar [%lu]| [%d, %d]\n", sizeof(int), INT_MIN, INT_MAX);
    printf("short |Rozmiar [%lu]| [%d, %d]\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("long |Rozmiar [%lu]| [%ld, %ld]\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("__int64 |Rozmiar [%lu]| [%lld, %lld]\n", sizeof(__int64), __INT64_MIN, __INT64_MAX);
    
    printf("unsigned short |Rozmiar [%lu]| [%d, %d]\n", sizeof(unsigned short), 0, USHRT_MAX);
    printf("unsigned long |Rozmiar [%lu]| [%d, %lu]\n", sizeof(unsigned long), 0, ULONG_MAX);
    
    printf("float |Rozmiar [%lu]| [%f, %f]\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double |Rozmiar [%lu]| [%lf, %lf]\n", sizeof(double), DBL_MIN, DBL_MAX);
    
    printf("char |Rozmiar [%lu]| [%d, %d]\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char |Rozmiar [%lu]| [%d, %d]\n", sizeof(unsigned char), 0, UCHAR_MAX);
    
    return 0;
}

