main()	/* print intput words, one per line */
{
	int c, inword;

	while ((c = getchar()) != EOF)
		if (c == '\n' || c == ' ' ||  c == '\t') {
			if(inword) {
				printf("\n");
			}
			inword = 0;
		} else {
			inword = 1;
			printf("%c", c);
		}

	if(inword)
		printf("\n");
}
