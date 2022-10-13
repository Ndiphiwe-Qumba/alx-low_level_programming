#ifndef _DOG_H_
#define _DOG_H_

/**
 * init_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
