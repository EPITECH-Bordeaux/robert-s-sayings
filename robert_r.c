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
                    "Un char triplement étoilé (comme les hotels)\n",
                    "test ultime du double poteau encerclé\n",
                    "c'est hyper fat, tu ne te rends meme pas compte\n",
                    "un char doublement etoilé\n",
                    "moi ca me parait evident\n",
                    "il est enorme adrien !\n",
                    "tu aimes la minilibx ?\n",
                    "comme si tu allais l utiliser toute ta vie.\n",
                    "n'importe quoi\n",
                    "ça mparait logique\n",
                    "Putain casez vous bande de nuggets !\n",
                    "Sappin: c'est un binaire detente\n",
                    "Tu as un libc ou un double glibc ?\n",
                    "Tu vas etre filmé ? A oui, ca passe sur quelle chaine ?\n",
                    "Tu m'as envoyé des paquets magiques\n",
                    "Ca sera une grande premiere dans le monde de linux, un shell qui execute une commande de plus de 256 caracteres\n",
                    "Quand tu fais le swaper\n",
                    "Fait le checkers\n",
                    "je fais un double etoile\n",
                    "J'ai la colision des effets\n",
                    "Do you like dicks ? yes\n",
                    "x² + x² = x^4 !\n",
                    "envoyez moi des paquets magiques ! faite quelque chose !\n",
                    "un lien posez vos question, remy: clic! des fois ils proposent des qcm\n",
                    "Bon concretement ciomment ça se passe ?\n",
                    "Cordialement.\n",
                    "je suis nul en tab\n",
                    "qq disant que remy a eu 0 à l'exam, remy: tu as pleuré pour moi ?\n",
                    "(13:28:09) robert_r: we are in math' s lesson. Sorry we aren' t disponible. try again\n",
                    "Avoir un fond blanc, ça abime mon écran.\n",
                    "Mais gueux j'ai l'impression qu'il mange trop de camembert en ce moment\n"
                  };

int	main(int argc, char **argv)
{
  int	i;
  int	seed;

  seed = time(NULL);
  srand(seed);
  if (argv[1] != NULL)
    srand(atoi(argv[1]));
   if (argc > 2)
   i = rand() % (sizeof(sayings) / sizeof(char*));
   printf("%s", sayings[i]);
   else
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
