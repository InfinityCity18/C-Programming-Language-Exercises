#include <stdio.h>


main()
{
    int c;
    int wordlength;
    int arrayo[100];
    int inword;
    int last_index;
    int largest_occurence;

    wordlength = 0;
    last_index = 0;
    largest_occurence = 0;

    for (int i = 0; i < 100; ++i) {
        arrayo[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ((c == '\t' || c == '\n' || c == ' ') && inword) {
            inword = 0;
            ++arrayo[wordlength];
            wordlength = 0;
        } else if (c != '\t' && c != '\n' && c != ' ') {
            inword = 1;
            ++wordlength;
        }
    }

    for (int i = 0; i < 100; ++i) {
        if (arrayo[i] != 0) {
            last_index = i;
        }
    }

    for (int i = 0; i < 100; ++i) {
        if (arrayo[i] > largest_occurence) {
            largest_occurence = arrayo[i];
        }
    }

    printf("--");

    for (int i = 0; i <= last_index; ++i) {
        if (i >= 10) {
            printf("---");
        } 
        else {
            printf("--");
        }
    }
    printf("\n");

    for (int i = largest_occurence; i >= 1; --i) {
        if (largest_occurence >= 10) {
            if (i >= 10) {
                printf("%d", i);
            } else {
                printf(" %d", i);
            }
        } 
        else {
            printf("%d ", i);
        }
        for (int j = 1; j <= last_index; ++j) {
            if (arrayo[j] >= i) {
                if (j >= 10 && j <= 99) {
                    printf(" | ");
                }
                else {
                    printf("| ");
                }
            }
            else {
                if (j >= 10 && j <= 99) {
                    printf("   ");
                }
                else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    printf("  ");
    for (int i = 1; i <= last_index; ++i) {
        printf("%d ", i);
    } 

    printf("\n\nLARGEST OCCURENCE %d LAST INDEX %d", largest_occurence, last_index);
    
    
}   