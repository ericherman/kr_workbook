main()	/* count lines in input */
{
	int c, ws;

	ws = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == ' ' ||  c == '\t')
			++ws;
	printf("%d\n", ws);
}
