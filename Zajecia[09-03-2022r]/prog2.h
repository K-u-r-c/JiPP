//
//  prog2.h
//  JiPP
//
//  Created by Jakub Kurc on 09/03/2022.
//

#ifndef prog2_h
#define prog2_h
#endif /* prog2_h */

#include <stdio.h>

#define N 5

float avg(int *tab) { // Rozmiar tablicy mamy zdefiniowany globalnie więc nie pobieram rozmiaru tablicy jako argumentu
    int sum = 0, g = 0;
    
    for(int i = 0; i < N; i++) {
        if(tab[i] >= 0) {
            g++;
            sum += tab[i];
        }
    }
    
    if(g > 0) {
        return (float)sum / g;
    } else {
        return -1;
    }
}

char grading(float score) {
    if(score <= 1.0) {
        return 'F';
    } else if (score <= 2.0) {
        return 'D';
    } else if (score <= 3.0) {
        return 'C';
    } else if (score <= 4.0) {
        return 'B';
    } else {
        return 'A';
    }
}

int prog2(void) {
    int tab[N] = { -1, -1, -1, -1, -1 };
    char surename[32] = {'\0'};
    float score;
    
    printf("Surename? : ");
    scanf("%s", surename);
    
    printf("Enter %d grades : ", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &tab[i]);
    }
    
    score = avg(tab);
    if(score == -1) {
        fprintf(stderr, "Student has no grades!\n");
        return -1;
    }
    
    printf("Surename: %s, grade: %c, score: %f\n", surename, grading(score), score);
    
    return 0;
}

