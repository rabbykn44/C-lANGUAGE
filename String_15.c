#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, vowel, consonant, digit, word, other, ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets instead of gets for safety

    i = vowel = consonant = word = digit = other = 0;

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'I' || ch == 'E' || ch == 'O' || ch == 'U')
            vowel++;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            consonant++;
        else if (ch >= '0' && ch <= '9') // Corrected comparison with '9'
            digit++;
        else if (ch == ' ')
            word++;
        else
            other++;
        i++;
    }
    word++; // Increment word count for the last word

    printf("Number of vowels = %d\n", vowel);
    printf("Number of consonants = %d\n", consonant);
    printf("Number of words = %d\n", word);
    printf("Number of digits = %d\n", digit);
    printf("Number of others = %d\n", other);

    return 0;
}

// Enter a string: Rabby Khan123!#$
// Number of vowels = 2
// Number of consonants = 7
// Number of words = 2
// Number of digits = 3
// Number of others = 4