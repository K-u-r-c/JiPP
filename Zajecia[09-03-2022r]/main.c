//
//  main.c
//  Zajecia[09-03-2022r]
//
//  Created by Jakub Kurc on 09/03/2022.
//

#include <stdio.h>
#include "prog1.h"
#include "prog2.h"

int main(int argc, const char * argv[]) {
    
    if(prog1() == 0 && prog2() == 0) {
        return 0;
    } else {
        fprintf(stderr, "There was an error!\n");
        return -1;
    }
}
