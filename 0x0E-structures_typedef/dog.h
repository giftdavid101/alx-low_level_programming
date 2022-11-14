#ifndef DOG
#define DOG

/**
 * struct dog - dog profile
 * @name: input one
 * @age: input two
 * @owner: input three
 * Description: a struct construct for a dog
 */


struct dog
{
char *name;
float age;
char *owner;
};

/*
 * dog_t - alias for struct dog
 */


typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
