#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <dirent.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <signal.h>
#include <limits.h>
#include <stddef.h>
#include <stdbool.h>
typedef struct path
{
	char *var;
	struct path *next;
}path;


