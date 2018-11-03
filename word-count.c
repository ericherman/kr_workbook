/* word-count.c
   Copyright (C) 2016, 2018 Eric Herman <eric@freesa.org>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

	https://www.gnu.org/licenses/gpl-3.0.txt
 */
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
			   && !((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
				|| (c >= '0' && c <= '9') || c == '\'')) {
			inword = NO;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
