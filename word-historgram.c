#define YES 1
#define NO 0
#define MAX_WORD_LEN 15
#define BUFSIZE (MAX_WORD_LEN + 1)

main()
{				/* count lines, words, chars in input */
	int c, i, nl, nw, nc, wl, inword;
	int lens[BUFSIZE];

	for (c = 0; c < BUFSIZE; ++c) {
		lens[c] = 0;
	}

	inword = NO;
	nl = nw = nc = wl = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
			inword = NO;
		} else if ((inword == NO)
			   && ((c >= 'A' && c <= 'Z')
			       || (c >= 'a' && c <= 'z'))) {
			inword = YES;
			++nw;
		} else if ((inword == YES)
			   && !((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
				|| (c >= '0' && c <= '9') || c == '\'')) {
			inword = NO;
		}
		if(inword == YES) {
			++wl;
		}
		if((inword == NO) && wl) {
			++(lens[(wl > MAX_WORD_LEN) ? 0 : wl]);
			wl = 0;
		}
	}
	if (wl) { ++lens[(wl > MAX_WORD_LEN) ? 0 : wl]; }
	printf("lines: %d words: %d characters: %d\n", nl, nw, nc);
	for (c = 1; c < BUFSIZE; ++c) {
		printf(" %2d:", c);
		for (i = 0; i < lens[c]; ++i) {
			printf("*");
		}
		printf("\n");
	}
	printf(">%2d:", BUFSIZE - 1);
	for (i = 0; i < lens[0]; ++i) {
		printf("*");
	}
	printf("\n");
}
