#include <cstdio>
#include <iostream>

char simple_to_upper(char x);
int main()
{
    char alphabet[27];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);
    std::cout << "Type a lowercase letter \n";
    char y;
    std::cin >> y;
    printf("%c\n", simple_to_upper(y));
}

char simple_to_upper(char x)
{
    if (x < 122 || x > 60)
    {
        x -= 32;
        return x;
    }
    else
        return x;
}