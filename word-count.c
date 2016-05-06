#define YES 1
#define NO 0

main()
{				/* count lines, words, chars in input */
	int c, nl, nw, nc, inword;

	inword = NO;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
			inword == NO;
		} else if ((inword == NO)
		    && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
			inword = YES;
			++nw;
		} else if ((inword == YES)
			   && !((c >= 'A' && c <= 'Z') || (c >= 'z' && c <= 'z')
				|| (c >= '0' && c <= '9') || c == '\'')) {
			inword = NO;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
