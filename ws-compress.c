/* compress regions of whitespace to a single blank */
main()
{
	int c, lc;

	lc = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t')
			c = ' ';
		if (c != ' ' || lc != ' ')
			printf("%c", c);
		lc = c;
	}
}
