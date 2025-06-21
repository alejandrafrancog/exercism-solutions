#include "reverse_string.h"
char *reverse(const char *value){
    int length = strlen(value);
    char *word = malloc (sizeof (char) * length);
    for (int i = length-1; i>=0; i--){
        word[length - i-1] = value[i];
    }
    return word;
}
