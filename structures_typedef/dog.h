#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct for a dog
 * @name: name of dog, a string
 * @age: the dogs age, a float
 * @owner: owner of the dog, a string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
