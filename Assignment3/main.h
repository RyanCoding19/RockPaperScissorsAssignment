#pragma once

#define MAX_HOLDING	50	//holds 9 because the longest word the user needs to enter is scissors

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void printIntro();
char *actualGame(char*, char*);