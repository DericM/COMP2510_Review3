
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print(node *lst);
node *find(node *lst, const char *name);
void destroy(node *lst);

typedef struct {
	char name[32];
	int score;
} record;

typedef struct {
	record data;
	node next;
} node;

int main()
{
    

	return 0;
}


/* -------1------- */
/* (a) */
void print(node *lst) {
	node *p;
	for (p = lst; p != 0; p=p->next)
		printf("%s %d", p->data.name, p->data.score);
}

/* (b) */
node *find(node *lst, const char *name) {
	node *p;
	for (p = lst; p != 0; p = p->next) {
		if (p->data.name == name)
			return p;
	}
	return 0;
}

/* (c) */
void destroy(node *lst) {
	node *p, *q;
	for (p = lst; p != 0; p = q) {
		q = p->next;
		free(p);
	}
}

/* (d) */
int insert(node **plst, const char *name, int score) {
	node *p = malloc(sizeof(node));
	if (p == 0) {
		return 0;
	}
	strcpy(p->data.name, name);
	p->data.score = score;
	p->next = *plst;
	*plst = p;
	return 1;
}

/* (e) */
size_t delete_all(node **plst, const char *name) {
	size_t n = 0;
	node **tracer;
	for (tracer = plst; *tracer != 0; tracer = &(*tracer)->next) {
		if (strcmp((*tracer)->data.name, name)==0) {
			node *p = tracer;
			*tracer = p->next;
			n++;
		}
		else {
			tracer = &(*tracer)->next;
		}
	}
	return n;
}


/* -------2------- */

/* (a) */
int cmp(const void *p, const void *q) {
	const record *pp = p;
	const record *qq = q;

	return qq->score - pp->score;
}
/* (b) */
int cmp(const void *p, const void *q) {
	const record *pp = p;
	const record *qq = q;

	int i = strcmp(pp->name, qq->name);
	if (i == 0) {
		return qq->score - pp->score;
	}
	return i;
}

/* -------3------- */

/* (a) */
/* p = "llo" valid */

/* (b) */
/* p = "ello" valid */

/* (c) */
/* cant assign a value to nothing */

/* -------4------- */
/* (a) */
/* x is a pointer to an array of 2 ints */

/* (b) */
/* x is a */





/* (d) */
int insert(node **plst, const char *name, int score) {
	node *p = malloc(sizeof(node));
	if (p == 0)
		return 0;
	for () {

	}

}





