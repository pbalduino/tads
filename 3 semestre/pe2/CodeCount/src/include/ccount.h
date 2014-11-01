#include <locale.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char BOOL;
typedef int*  ptrINT;
typedef char* ptrCHAR;
typedef FILE* prtFILE;

#define FALSE (BOOL)0
#define TRUE  (BOOL)!FALSE

#define PARAM_HELP_SHORT "-h"
#define PARAM_HELP_LONG  "--help"

#define PARAM_SILENT_SHORT "-s"
#define PARAM_SILENT_LONG  "--silent"

#define PARAM_COMMENT_SHORT "-c"
#define PARAM_COMMENT_LONG  "--comment"

void cc_run(prtFILE file, BOOL comment, BOOL silent, 
            ptrINT lines, ptrINT commented_lines, ptrINT empty_lines);

void cc_show_options();
