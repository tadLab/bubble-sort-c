#include <stdio.h>
#include <string.h>

//SORTS IT AS ABCDE...
void bubbleSort(int rows, char text[rows][50]) {

    for (int i = 0; i < rows - 1; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            if (strcmp(text[j], text[j+1]) > 0) {
                // Swap strings
                char temp[50];
                strcpy(temp, text[j]);
                strcpy(text[j], text[j+1]);
                strcpy(text[j+1], temp);
            }
        }
    }
}

//PRINTS THE WHOLE ARRAY
void printArray(int rows, char text[rows][50]){

    for(int index = 0; index < rows; index++){
        printf("%s\n", text[index]);
    }

}

int main(int argc, char const *argv[])
{
    int count = 0;

    printf("How many words you want to type ? ");
    scanf("%d", &count);

    char words[count][50];

    for(int index = 0; index < count; index++){
        printf("Enter the %d. word: ", index + 1);
        scanf("%s", words[index]);
    }  

    bubbleSort(count, words);

    //prints the sorted array
    printArray(count, words);

    return 0;
}
