/* compress regions of whitespace to a single blank */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		switch (c) {
		case '\t':
			printf(">\b-");
			break;
		case '\b':
			printf("<\b-");
			break;
		default:
			printf("%c", c);
		}
	}
}
