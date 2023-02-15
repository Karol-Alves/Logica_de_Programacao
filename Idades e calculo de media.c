#include <stdio.h>
int n, i, id, cont, acum;
float med;
int
main ()
{
  printf ("Quantas idades?\n");
  scanf ("%d", &n);
  while (i < n)
    {
      printf ("Digite sua idade\n");
      scanf ("%d", &id);
      acum += id;

      if (id >= 18)
	{
	  cont++;
	}

      i++;
    }
    //Fora do laço de repetição
  med = acum / n;
  printf ("\n %d possuem 18 anos ou mais\n", cont);
  printf ("\nA media de idade digitadas e %.2f\n", med);
  return 0;
}

