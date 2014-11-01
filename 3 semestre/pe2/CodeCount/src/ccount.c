#include "include/ccount.h"

void cc_run(prtFILE file, BOOL comment, BOOL silent, ptrINT lines, ptrINT commented_lines, ptrINT empty_lines) {
	char c;
	BOOL empty = TRUE;
	BOOL comment_candidate = FALSE;
	BOOL end_comment_candidate = FALSE;
	BOOL one_line_comment = FALSE;
	BOOL multi_line_comment = FALSE;
	BOOL already_counted = FALSE;

	if ((c = fgetc(file)) != EOF) {
		(*lines)++;
	}

	while(c != EOF) {
		if(c == '\n') {
			if(empty) {
				(*empty_lines)++;
			} else if(one_line_comment || multi_line_comment) {
				one_line_comment = FALSE;
				(*commented_lines)++;
			} else if (!already_counted){
				(*lines)++;
			} else {
				already_counted = FALSE;
			}
			empty = TRUE;
			comment_candidate = FALSE;
		} else if (c != ' ' || c != '\r') {
			empty = FALSE;
			if(c == '/') {
				if(multi_line_comment && end_comment_candidate) {
					multi_line_comment = FALSE;
					end_comment_candidate = FALSE;
					(*commented_lines)++;
					already_counted = TRUE;
				} else if (!comment_candidate) {
					comment_candidate = TRUE;
				} else {
					comment_candidate = FALSE;
					one_line_comment = TRUE;
				}
			} else if (comment_candidate && c == '*') {
				comment_candidate = FALSE;
				multi_line_comment = TRUE;
			} else if (multi_line_comment && c == '*') {
				end_comment_candidate = TRUE;
			} else {
				end_comment_candidate = FALSE;
			}
		}
		c = fgetc(file);
	}
}

void cc_show_options() {
	printf("\nCodeCount: Contador de linhas de um codigo fonte em C/C++\n");
	printf("           ATPS de Programacao Estruturada 2\n");
	printf("  Uso:\n");
	printf("     CodeCount [opcoes] arquivo.c[pp]\n");
	printf("  Opcoes:\n");
	printf("    -h --help   : Exibe esta tela\n");
	printf("    -c --comment: Exibe a contagem de linhas comentadas\n");
	printf("    -s --silent : Nao exibe informacoes na tela\n");
}
