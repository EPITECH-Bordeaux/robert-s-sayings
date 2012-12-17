#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*sayings[] = {"I want to drive a car… a fat car.\n",
                    "Ça marche pas.\n",
                    "Bug interstellaire !\n",
                    "un char simplement étoilé (comme les hotels)\n",
                    "Super hyper giga segfault !\n",
                    "je suis un pationné de ...\n",
                    "Segmentation DE Fault\n",
                    "J'aimerais bien avoir un seg fault sa veut dire que j'avance!\n",
                    "Je te le sort\n bluh bluh bluh blhu\n",
                    "test ultime du double poteau encerclé\n",
                    "c'est hyper fat, tu ne te rends meme pas compte\n",
                    "moi ca parait évident\n",
                    "il est enorme adrien\n",
                    "Tu l'aime la minilibx ?\n",
                    "fait une boucle while comme si tu allais utiliser toute ta vie\n",
                    "Un char triplement étoilé (comme les hotels)\n"
                  };

int	main(int argc, char **argv)
{
  int	i;
  int	seed;

  seed = time(NULL);
  srand(seed);
  if (argv[1] != NULL)
    srand(atoi(argv[1]));
  while (1)
    {
      i = rand() % 1000 + 400000;
      usleep(i);
      i = rand() % 2;
      if (i)
        {
          i = rand() % (sizeof(sayings) / sizeof(char*));
          printf("%s", sayings[i]);
        }
    }
  return (EXIT_SUCCESS);
}
