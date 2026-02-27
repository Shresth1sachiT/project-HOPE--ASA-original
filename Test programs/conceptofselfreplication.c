FILE *files[numfiles];
for (int i = 0; i < numfiles; i++)
{
    char filename[20];
    sprintf(filename, "results%d.dat", i);
    files[i] = fopen(filename, "w");
}
