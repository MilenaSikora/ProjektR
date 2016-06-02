main (void)
{
    char tekst[] = {'aaa', 'bbb', 'ccc', 'ddd', 'eee', 'fff', 'ggg', 'hhh'};
    int i;
        for (i = 0; i < sizeof (tekst) / sizeof (int); i++)
        printf("%s", tekst);
    printf("\n");
return 0;
}
