#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("Hey, %s\n", answer);
    string age = get_string("How old are you? ");
    printf("Cool, I'm also %s\n", age);

}
