#include "include/ccount.h"

void pause() {
    system("PAUSE");
}
     
int main(int argc, ptrCHAR argv[]) {
	int lines = 0;
	int commented_lines = 0;
	int empty_lines = 0;
	ptrCHAR filename = NULL;

	BOOL silent = FALSE;
	BOOL comment = FALSE;
	BOOL help = FALSE;

	int p;
	
	setlocale(LC_ALL, "portuguese");

	for (p = 1; p < argc; p++) {
		if ((strcmp(argv[p], PARAM_HELP_LONG) == 0)
				|| (strcmp(argv[p], PARAM_HELP_SHORT) == 0)) {
			help = TRUE;
			break;
		} else if ((strcmp(argv[p], PARAM_COMMENT_SHORT) == 0)
				|| (strcmp(argv[p], PARAM_COMMENT_LONG) == 0)) {
			comment = TRUE;
		} else if ((strcmp(argv[p], PARAM_SILENT_SHORT) == 0)
				|| (strcmp(argv[p], PARAM_SILENT_LONG) == 0)) {
			silent = TRUE;
		} else {
			filename = argv[p];
		}
	}

	if (help) {
		cc_show_options();
	} else {
		if (filename) {
			FILE* file = fopen(filename, "r");

			if (file) {

				cc_run(file, comment, silent, &lines, &commented_lines,
						&empty_lines);

				if (!silent) {
					printf("---\n");
					printf("Lendo arquivo %s\n", filename);
					printf("  Linhas de codigo:  %d\n", lines);
					printf("  Linhas em branco:  %d\n", empty_lines);
					if (commented_lines) {
						printf("  Linhas comentadas: %d\n", commented_lines);
					}
				}

				fclose(file);
			} else {
				printf("Arquivo %s nao encontrado\n", filename);
			}
		} else {
			printf("Informe o arquivo a ser lido\n");
		}
		pause();
	}

	return 0;
}
