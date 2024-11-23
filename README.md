# libft
/* La fonction `ft_bzero` remplace les `n` premiers octets de la zone mémoire pointée par `s` par des zéros, initialisant ainsi la zone à zéro. */ 
/* La fonction `ft_atoi` convertit une chaîne de caractères `str` en un entier (`int`), en gérant les espaces blancs initiaux et le signe (+ ou -). */ 
/* La fonction `ft_calloc` alloue de la mémoire pour un tableau de `count` éléments de `size` octets chacun et initialise chaque octet à zéro. Elle vérifie également les débordements en cas de multiplication.   La fonction `ft_memalloc` est une fonction interne utilisée par `ft_calloc` pour allouer `size` octets de mémoire initialisés à zéro. */ 
/* La fonction `ft_itoa` convertit un entier (`int`) en une chaîne de caractères (`char *`) représentant sa valeur décimale. Elle gère les valeurs négatives en ajoutant un signe '-' au début de la chaîne si nécessaire.   La fonction interne `count_size` calcule la longueur de la chaîne nécessaire pour représenter l'entier, en prenant en compte le signe pour les nombres négatifs. */ 
/* La fonction `ft_memchr` recherche la première occurrence de l'octet `c` (interprété comme un `unsigned char`) dans les `n` premiers octets de la zone mémoire pointée par `s`. Elle retourne un pointeur vers l'octet correspondant, ou `NULL` si `c` n'est pas trouvé. */ 
/* La fonction `ft_memcmp` compare les `n` premiers octets des zones mémoire `s1` et `s2`. Elle retourne un entier négatif, nul ou positif, selon que `s1` est respectivement inférieur, égal ou supérieur à `s2`. La comparaison s'arrête dès que des octets différents sont trouvés. */ 
/* La fonction `ft_memcpy` copie les `n` premiers octets de la zone mémoire `src` vers la zone mémoire `dst`. Elle retourne un pointeur vers `dst`. Les zones mémoire ne doivent pas se chevaucher. */ 
/* La fonction `ft_memmove` copie `len` octets de la zone mémoire `src` vers `dst`, en prenant en compte les chevauchements éventuels entre `src` et `dst`. Si `dst` est situé avant `src`, la copie se fait de manière ascendante; sinon, elle se fait de manière descendante. Elle retourne un pointeur vers `dst`. */ 
/* La fonction `ft_memset` remplit les `len` premiers octets de la zone mémoire pointée par `b` avec l'octet `c` (interprété comme un `unsigned char`). Elle retourne un pointeur vers la zone mémoire `b`. */ 
/* La fonction `ft_split` divise la chaîne `s` en un tableau de sous-chaînes, en utilisant le caractère `c` comme délimiteur. Elle retourne un tableau de chaînes (`char  `), où chaque élément représente une sous-chaîne. La fonction gère les délimiteurs consécutifs en ignorant les chaînes vides.   La fonction interne `count_words` calcule le nombre de mots (sous-chaînes) dans `s`, tandis que `fill_tab` remplit chaque sous-chaîne dans le tableau, et `set_mem` alloue de la mémoire pour chaque sous-chaîne et les ajoute au tableau final. */ 
/* La fonction `ft_strchr` recherche la première occurrence du caractère `c` dans la chaîne `s`. Elle retourne un pointeur vers le caractère correspondant dans `s`, ou `NULL` si `c` n'est pas trouvé. */ 
/* La fonction `ft_strdup` alloue suffisamment de mémoire pour dupliquer la chaîne `s1`, copie son contenu dans cette nouvelle zone mémoire, puis retourne un pointeur vers la copie. Si l'allocation échoue, elle retourne `NULL`. */ 
/* La fonction `ft_striteri` applique la fonction `f` à chaque caractère de la chaîne `s`, en passant l'index du caractère en premier argument. Elle permet ainsi de modifier chaque caractère de `s` en fonction de sa position dans la chaîne. */ 
/* La fonction `ft_strjoin` concatène deux chaînes `s1` et `s2` dans une nouvelle zone mémoire allouée dynamiquement. Elle retourne un pointeur vers cette nouvelle chaîne résultante, ou `NULL` en cas d'échec de l'allocation. */ 
/* La fonction `ft_strlcat` concatène la chaîne `s` à la fin de la chaîne `d`, en veillant à ce que la longueur totale ne dépasse pas `dstsize` (y compris le caractère nul final). Elle retourne la longueur totale de la chaîne qu'elle a tenté de créer, ce qui permet de gérer les tailles de buffer. */ 
/* La fonction `ft_strlcpy` copie jusqu'à `dstsize - 1` caractères de la chaîne `src` vers `dst`, en ajoutant un caractère nul final. Elle retourne la longueur de `src`, permettant de déterminer si toute la chaîne a été copiée. Si `dstsize` est trop petit, `dst` sera tronqué. */ 
/* La fonction `ft_strlen` calcule et retourne la longueur de la chaîne `s`, sans compter le caractère nul final. */ 
/* La fonction `ft_strmapi` applique la fonction `f` à chaque caractère de la chaîne `s`, en passant l'index du caractère et le caractère lui-même comme arguments, pour créer une nouvelle chaîne. Elle retourne un pointeur vers cette nouvelle chaîne, ou `NULL` en cas d'échec de l'allocation. */ 
/* La fonction `ft_strncmp` compare jusqu'à `n` caractères des chaînes `s1` et `s2`. Elle retourne un entier négatif, nul, ou positif, selon que `s1` est respectivement inférieur, égal, ou supérieur à `s2`. La comparaison s'arrête dès qu'une différence est trouvée ou que `n` caractères ont été comparés. */ 
/* La fonction `ft_strnstr` recherche la première occurrence de la sous-chaîne `needle` dans la chaîne `haystack`, en ne cherchant que dans les `len` premiers caractères de `haystack`. Elle retourne un pointeur vers le début de `needle` dans `haystack`, ou `NULL` si `needle` n'est pas trouvé. Si `needle` est une chaîne vide, `haystack` est retourné. */ 
/* La fonction `ft_strrchr` recherche la dernière occurrence du caractère `c` dans la chaîne `s`. Elle retourne un pointeur vers ce caractère dans `s`, ou `NULL` si `c` n'est pas trouvé. La recherche commence depuis la fin de la chaîne. */ 
/* La fonction `ft_strtrim` supprime tous les caractères présents dans `set` du début et de la fin de la chaîne `s1`, et retourne la nouvelle chaîne allouée dynamiquement. Si `s1` ne contient que des caractères de `set`, une chaîne vide est retournée.   La fonction `find_begin` trouve le premier caractère de `s1` qui n'est pas dans `set`, tandis que `find_end` trouve le dernier caractère qui n'est pas dans `set`. La fonction `fill_str` crée et remplit la nouvelle chaîne avec les caractères compris entre ces deux bornes. */






static int	strlen_split(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s && *s != c)
	{
		s++;
		j++;
	}
	return (j);
}

static int	count_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if ((*s != c && (*(s + 1) == c || *(s + 1) == '\0')))
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		k;

	result = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result || !s)
		return (0);
	i = 0;
	k = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		*(result + k) = (char *)malloc((strlen_split(s, c) + 1) * sizeof(char));
		if (!*(result + k))
			return (0);
		i = 0;
		while (*s && *s != c)
			*(*(result + k) + i++) = *s++;
		*(*(result + k++) + i) = 0;
		while (*s == c && *s)
			s++;
	}
	return (*(result + k) = 0, result);
}
