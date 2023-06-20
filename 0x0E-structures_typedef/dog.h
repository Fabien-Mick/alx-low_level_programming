#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Information about my dog.
  * @name: a char for his name
  * @age: a float that contains his age
  * @owner: a char for the name of the owner
  */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
