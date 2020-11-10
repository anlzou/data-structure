#include <stdio.h>
#include <malloc.h>

#define MaxSize 50

typedef char ElemType;

typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;