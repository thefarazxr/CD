// recursive.c
#include <stdio.h>
void E();
void E1();
void T();
void T1();
void F();
void match(char);
int flag = 1;
char ch, t;
int main()
{
    printf("The grammer is\n");
    printf("E-->E+T|T\nT-->T*F|F\nF-->i\n");
    printf("The elimination of left recursion is needed for implementing recersive descent parser\n");
    printf("The grammer after elimination of left recursion is\n");
    printf("E-->TE'\nE'-->+TE'|EPSILON \nT-->FT'\nT'-->*FT'|EPSILON \nF-->i\n");
    printf("enter input string and end the string with $\n");
    scanf("%c", &ch);
    E();
    if ((ch == '$') && (flag != 0))
        printf("successful\n");
    else
        printf("unsuccessful\n");
}

void match(char t)
{
    if (ch == t)
        scanf("%c", &ch);
    else
        flag = 0;
}

void E()
{
    T();
    E1();
}

void E1()
{
    if (ch == '+')
    {
        match('+');
        T();
        E1();
    }
    else
        return;
}

void T()
{
    F();
    T1();
}
void T1()
{
    if (ch == '*')
    {
        match('*');
        F();
        T1();
    }
    else
        return;
}

void F()
{
    match('i');
}