/**
 * cap_string - Capitalizes the first letter of words in a string.
 * @c: Pointer to the string to be capitalized.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] == '\t')
{
c[i] = ' ';
}
if (c[i] == '\n' && c[i + 1] >= 'a' && c[i + 1] <= 'z')
{
c[i + 1] -= 32;
}
if (c[i] == ' ' && c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] -= 32;
if (c[i] == '.' && c[i + 1] >= 'a' && c[i + 1] <= 'z')
c[i + 1] -= 32;
}
return (c);
}
