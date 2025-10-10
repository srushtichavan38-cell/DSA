#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define SIZE 10
struct stack
{
    int top,float data[SIZE];
};
typedef struct stack STACK;
void push (STACK *s,float item)
{
    s->data[++(s->top)]=item;
}
float pop (STACK *s)
{
    return s->data[(s->top)--];
}
float compute(float opr1,char symbol,float opr2)
{
    switch(symbol)
    {
        case '+':return opr1 + opr2;
        case '-':return opr1 + opr2;
        case '*':return opr1 + opr2;
        case '/':return opr1 + opr2;
        case '^':return pow(opr1,opr2);
    }
}

int main()
{
    char postfix[20];
    STACK s;
    s.top=-1;
    printf("\n read postfix expression \n");
    scanf("%s",postfix);
    ans=postfix evaluated(&s,postfix);
    printf("\n the final result is %f",ans);
    return 0;
}
