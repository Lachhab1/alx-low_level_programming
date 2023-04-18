#ifndef DOG
#define DOG

/**
 * struct dog - the loved hoof animal
 * @name: the name that belong to the dog
 * @age: number of years lived
 * @owner: the human that have the dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
