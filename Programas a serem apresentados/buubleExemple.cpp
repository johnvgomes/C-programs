#include <assert.h>
#include <stdio.h>
#include <string.h>

void sort(char s[50][50], int);

int main(void)
{
    int i;
    int n = 0;
    char s[50][50];


	printf("\n\n");
	printf("[LIMITE -->   1..50]:\n");
	printf("\n\n");
	printf("Digite o numero de strings que deverao ser digitadas:\n");
    if (scanf("%d", &n) != 1)
    {
        fprintf(stderr, "Falha ao ler numero de strings\n");
        return 1;
    }
    if (n <= 0 || n > 50)
    {
        fprintf(stderr, "%d esta fora do limite de  1..50\n", n);
        return 1;
    }
    // Gobble rest of first line
    while ((i = getchar()) != EOF && i != '\n')
        ;

    for (i = 0; i < n; i++)
    {
    	
	printf("\n\n");
    	printf("Digite a %i(a) string\n",(i+1));
        if (fgets(s[i], sizeof(s[i]), stdin) == 0)
            break;
        // Remove newline from input
        size_t len = strlen(s[i]);
        assert(len > 0);
        s[i][len-1] = '\0';
    }
    n = i;  // In case the file was shorter than stated!
	printf("\n\n\n");
    printf("Antes:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", s[i]);

    sort(s, n);
	printf("\n\n");
    printf("Depois:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", s[i]);

    return 0;
}

void sort(char s[50][50], int n)
{
    int i, j, cmp;
    char tmp[50];

    if (n <= 1)
        return; // Already sorted

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            cmp = strcmp(s[j], s[j+1]);

            if (cmp > 0)
            {
                strcpy(tmp, s[j+1]);
                strcpy(s[j+1], s[j]);
                strcpy(s[j], tmp);
            }
        }
    }
}
