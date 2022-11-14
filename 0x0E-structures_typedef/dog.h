#ifndef HEADER
#define HEADER

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
