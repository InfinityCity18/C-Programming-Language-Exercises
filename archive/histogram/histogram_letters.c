#include <stdio.h>


main()
{
    int c;
    int wordlength;
    int arrayo[200];

    int last_index;
    int largest_occurence;

    wordlength = 0;
    last_index = 0;
    largest_occurence = 0;

    for (int i = 0; i < 200; ++i) {
        arrayo[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c != '\t' && c != '\n' && c != ' ') {
            ++arrayo[c];
        }
    }

    for (int i = 0; i < 200; ++i) {
        if (arrayo[i] != 0) {
            last_index = i;
        }
    }

    for (int i = 0; i < 200; ++i) {
        if (arrayo[i] > largest_occurence) {
            largest_occurence = arrayo[i];
        }
    }

    printf("--");

    for (int i = 'a'; i <= last_index; ++i) {
        printf("--");
    }
    printf("\n");

    for (int i = largest_occurence; i >= 1; --i) {
        if (largest_occurence >= 10) {
            if (i >= 10) {
                printf("%d ", i);
            } 
            else {
                printf(" %d ", i);
            }
        } 
        else {
            printf("%d ", i);
        }
        for (int j = 'a'; j <= last_index; ++j) {
            if (arrayo[j] >= i) {
                printf("| ");
            }
            else {
                printf("  ");
            }
        }
        
        printf("\n");
    }
    
    printf("  ");
    for (int i = 'a'; i <= last_index; ++i) {
        printf("%c ", i);
    } 

    printf("\n\nLARGEST OCCURENCE %d LAST INDEX %d", largest_occurence, last_index);
    
    
}   