#include <stdio.h>

void searchWord(char (*words)[10], int wordsCount, char* word){
    int counter = 0;
    for (int j = 0; j < wordsCount; j++)
    {
        for (int i = 0; i < wordsCount; i++)
        {
            word[i] = words[i][counter];
        }
        if (word[wordsCount-1] != ' ')
            break;
        counter++;
    }
}

int main(){
    char word[3];
    char words[3][10] = {"cat", " salad", " kiwi"};
    searchWord(words,3,word);
    printf("%s\n", word);
    return 0;
}
