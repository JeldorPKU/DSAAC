/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/17/2018 19:20:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <list.h>

struct Node {
    ElementType Element;
    PtrToNode Next;
}

Stack CreateStack(void) {
    Stack S;
    S = malloc(sizeof(struct Node));
    if (S == NULL) FatalError("Out of space!!!");
    S->Next = NULL;
    MakeEmpty(S);
    return S;
}

void MakeEmpty(Stack S) {
    if (S == NULL)
        Error("Must use CreateStack first");
    else
        while (!IsEmpty(S)) Pop(S);
}

void Push(ElementType X, Stack S) {
    PtrToNode TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if (TmpCell == NULL)
        FatalError("Out of space!!!");
    else {
        TmpCell->Element = X;
        TmpCell->Next = S->Next;
        S->Next = TmpCell;
    }
}

ElementType Top(Stack S) {
    if (!IsEmpty(S)) return S->Next->Element;
    Error("Empty stack");
    return 0;
}
