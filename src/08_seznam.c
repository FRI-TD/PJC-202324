#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_OCEN 20

typedef struct student {
  char *ime;
  int  id;
  int  stOcen;
  int  ocene[MAX_OCEN];

  struct student *next;
} student;


student* novStudent(char *ime, int id) {
  student* nov = malloc(sizeof(student));
  
  nov->ime = malloc(strlen(ime)+1);
  strcpy(nov->ime, ime);
  
  nov->id = id;
  nov->stOcen=0;

  nov->next = NULL;

  return nov; 
}

void dodajOceno(student *s, int o) {
  if (s != NULL && s->stOcen < MAX_OCEN) 
	s->ocene[s->stOcen++]=o;
}

void izpisi(student *s) {
  if (s != NULL) {
    printf("%d %s, ocene: [", s->id, s->ime);
	for(int i=0; i < s->stOcen; i++)
	  printf("%d%s", s->ocene[i],  i==s->stOcen-1 ? "" : ", ");
	printf("]\n");
  } else {
	printf("?\n");
  }
}

void brisiStudenta(student *s) {
  if (s != NULL) {
    free(s->ime);
	free(s);
  }
}

// doda studenta na zacetek seznama
student* dodajZ(student *z, student *nov) {
  nov->next = z;
  return nov;
}

// doda studenta na konec seznama in vrne nov zecetek
student* dodajK(student *z, student *nov) {
  if (z == NULL) return nov;

  student *t = z;
  // poiscemo mesto vstavljanja
  while (t->next != NULL)
	t = t->next;
  t->next = nov;

  return z;
}

// doda studenta na pravo mesto v seznamu in vrne nov zacetek
student* dodajU(student *z, student *nov) {
  if (z == NULL || strcmp(nov->ime, z->ime) <= 0) {
    nov->next = z;
	return nov;
  }

  // poiscmo zadnji element, ki se ni NULL oziroma, ki je se manjsi od novega elementa
  student *t = z;
  while (t->next != NULL && strcmp(t->next->ime, nov->ime) < 0)
	t = t->next;

  nov->next = t->next;
  t->next   = nov;

  return z;	
}

// uredi seznam z
student * uredi(student *z) {
  student *nZ = NULL;
  
  while (z != NULL) {
	student *t = z -> next;
	z->next=NULL;
	nZ = dodajU(nZ, z);
	z = t;
  }

  return nZ;
}

// odstrani studenta z danim id in vrne nov zacetek
student * brisi(student *z, int id) {
  if (z == NULL) return NULL;

  // brisem prvi element
  if (z->id == id) {
    student *n = z->next;
	brisiStudenta(z);
	return n;
  }

  // brisem nekoga iz "sredine" seznama
  student *t = z;
  while (t->next != NULL && t->next->id != id)
	t = t->next;

  if (t->next != NULL) {
    student *b = t->next;
	t->next = t->next->next;
	brisiStudenta(b);
  }

  return z;
}

void izpisiSeznam(student *z) {
  while (z != NULL) {
    izpisi(z);
	z = z->next;
  }
}

int main() {
  student *s1 = novStudent("A", 63001231); dodajOceno(s1, 10);dodajOceno(s1, 9);
  student *s2 = novStudent("B", 63001232); dodajOceno(s2, 5); dodajOceno(s2, 6);
  student *s3 = novStudent("C", 63001233); dodajOceno(s3, 7); dodajOceno(s3, 8);
  student *s4 = novStudent("D", 63001234); dodajOceno(s4, 8); dodajOceno(s4, 9);
  student *s5 = novStudent("J", 63001235); dodajOceno(s5, 10);dodajOceno(s5, 9);
  student *s6 = novStudent("C", 63001236); dodajOceno(s6, 5); dodajOceno(s6, 6);
  student *s7 = novStudent("U", 63001237); dodajOceno(s7, 7); dodajOceno(s7, 8);
  student *s8 = novStudent("O", 63001238); dodajOceno(s8, 8); dodajOceno(s8, 9);


  student *z = NULL; // kazalec na zacetek seznama; seznam je prazen
  z = dodajK(z, s1);
  z = dodajK(z, s2);
  z = dodajK(z, s3);
  z = dodajK(z, s4);

  z = brisi(z, 63001232);
  z = brisi(z, 63001231);
  z = brisi(z, 63001231);
  z = brisi(z, 63001233);
  z = brisi(z, 63001234);

  //  z = dodajZ(z, s5);
//  z = dodajZ(z, s6);
//  z = dodajU(z, s7);
//  z = dodajK(z, s8);

//  z = uredi(z);

  izpisiSeznam(z);

  brisiStudenta(s1);
  brisiStudenta(s2);
  brisiStudenta(s3);
  brisiStudenta(s4);

  return 0;
}
