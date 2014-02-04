#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	cpu_cycle(void)
{
  int				rval;

__asm__ volatile ("rdtsc" : "=A" (rval));
  return (rval);
}

char	*sayings[] = {"I want to drive a car… a fat car.\n",
		      "Ça marche pas.\n",
		      "Bug interstellaire !\n",
		      "un char simplement étoilé (comme les hotels)\n",
		      "Super hyper giga segfault !\n",
		      "Je suis un passionné de ...\n",
		      "Segmentation DE Fault\n",
		      "J'aimerais bien avoir un seg fault ça veut dire que j'avance!\n",
		      "Je te le sort\n bluh bluh bluh blhu\n",
		      "test ultime du double poteau encerclé\n",
		      "c'est hyper fat, tu ne te rends même pas compte\n",
		      "moi ça me parait évident\n",
		      "il est enorme adrien\n",
		      "*En parlant des maths* Je pensais que les x c'était des fois\n",
		      "Tu l'aime la minilibx ?\n",
		      "fait une boucle while comme si tu allais utiliser toute ta vie\n",
		      "Un char triplement étoilé (comme les hotels)\n",
		      "test ultime du double poteau encerclé\n",
		      "c'est hyper fat, tu ne te rends meme pas compte\n",
		      "un char doublement etoilé\n",
		      "moi ca me parait evident\n",
		      "il est enorme adrien !\n",
		      "tu aimes la minilibx ?\n",
		      "comme si tu allais l'utiliser toute ta vie.\n",
		      "n'importe quoi\n",
		      "ça m'parait logique\n",
		      "Putain cassez vous bande de nuggets !\n",
		      "Sapin: c'est un binaire detente\n",
		      "Tu as un libc ou un double glibc ?\n",
		      "Tu vas être filmé ? Ha oui, ca passe sur quelle chaine ?\n",
		      "Tu m'as envoyé des paquets magiques\n",
		      "Ca sera une grande premiere dans le monde de linux, un shell qui execute une commande de plus de 256 caracteres\n",
		      "Quand tu fais le swaper\n",
		      "Fait le checkers\n",
		      "je fais un double étoile\n",
		      "J'ai la collision des effets\n",
		      "Do you like dicks ? yes\n",
		      "x² + x² = x^4 !\n",
		      "envoyez moi des paquets magiques ! faite quelque chose !\n",
		      "un lien posez vos question, Remi: Clic! des fois ils proposent des qcm\n",
		      "Bon concretement comment ça se passe ?\n",
		      "Cordialement.\n",
		      "je suis nul en tab\n",
		      "*A propos de Rémi sur son 0 en exam* Remi: tu as pleuré pour moi ?\n",
		      "(13:28:09) robert_r: we are in math' s lesson. Sorry we aren' t disponible. try again\n",
		      "Avoir un fond blanc, ça abime mon écran.\n",
		      "Mais Gueux j'ai l'impression qu'il mange trop de camembert en ce moment\n",
		      "Mon telephone, c'est un ordinateur qui a l'option téléphone, mais encore il faut l'activer\n",
		      "Tu fais un ou exclusif ? non, je fais un xorus\n",
		      "Idem, pour moi ce n'est que d'idem\n",
		      "Truc de fat\n",
		      "Oui, j'adore la minilib\n",
		      "Armagetronade: c'est toi le tronade\n",
		      "Je me suis fait un opérateur privé avec une sim craquée\n",
		      "Y'a un man pour les nombres premiers ?\n",
		      "Pierre: ils arrivent dans 1/4 h. Remi: dans 1/4 h et demi ?\n",
		      "C'est fat ou c'est fat32 ?\n",
		      "je fais le xorus\n",
		      "Ca va encore être une semaine de 100 heures: non c'est plus que ca, ca va être une semaine de 100h et quart\n",
		      "la coatch: la derniere fois elle nous a donné des bons tuyaux sur svn\n",
		      "Git c'est fini, maintenant c'est l'afs ou rien\n",
		      "Je fais des free, je fais de la friture\n",
		      "Oui je crack ... jsuis un Crackers\n",
		      "Je corrige un bug et un autre apparait, ça fait une cascade de bug !\n",
		      "Phrase Remiesque !\n",
		      "Read c'est fantastique\n",
		      "je ne suis pas un puriste de la pomme au 3/4 croquée.\n",
		      "Pullez, non mais pullez vraiment !",
		      "Il faut mapper dur la !",
		      "En mode hacker de la nuit"
};

int	main(int argc, char **argv)
{
  int	i;
  int	seed;

  seed = cpu_cycle();
  if (argv[1] != NULL && argv[1][0] != '\0')
    seed = atoi(argv[1]);
srand(seed);
   if (argc > 2)
{
   i = rand() % (sizeof(sayings) / sizeof(char*));
   printf("%s", sayings[i]);
}
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
