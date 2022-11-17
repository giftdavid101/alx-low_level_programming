#ifndef VARIADIC_FUNCS
#define VARIADIC_FUNCS
#define FORMAT(f) ("%"#f)

/**
 * struct print_form - Define a struct to figure out how to print
 * @c: Character to check for
 * @f: Pointer to function to call
 */


typedef struct print_form
{
char *c;
void (*f)();
}print_form_t;

int sum_them_all(const unsigned int n, ...);

#endif
