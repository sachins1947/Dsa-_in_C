#include <stdio.h>
#include <ctype.h>
#define size 50
char s[size];
int top = -1;

char push(char elem)
{
    s[++top] = elem;
}
char pop()
{
    return (s[top--]);
}
int pr(char elem)
{
    switch (elem)
    {
    case '#':
        return 0;
    case '(':
        return 1;

    case '+':
    case '-':
        return 2;

    case '/':
    case '*':
    case '%':
        return 3;

    case '^':
        return 4;
    }
}
void main()
{
    char ch, infix[50], posfix[50], elem;
    int i = 0, j = 0;
    printf("Enter the inffix expression");
    scanf("%s", infix);
    push('#');
    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);
        else if (isalnum(ch))
        {
            posfix[j++] = ch;
        }
        else if (ch == ')')
        {
            while (s[top] != '(')
                posfix[j++] = pop();
            elem = pop();
        }
        else
        {
            while (pr(s[top]) >= pr(ch))
            {
                posfix[j++] = pop();
            }
            push(ch);
        }
    }
    while (s[top] != '#')
    {
        posfix[j++] = pop();
    }
    posfix[j++] = '\0';
    printf("infix %s to posfix \n%s expression is :", infix, posfix);
}
