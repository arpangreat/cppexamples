#include <iostream>

class Entity {
public:
  virtual void activity();

public:
  char *id;
  int x;
  float y;
  double z;
};

void Entity::activity() { std::cout << "Entity does activity!!!" << std::endl; }

void hijack_function() {
  std::cout << "(hijacked) Entity does activity!!!" << std::endl;
}

int main() {

  void *fake_vt[] = {(void *)hijack_function};

#if 1
  Entity e;
  Entity *p = &e;  // use pointer to prevent devirtualization
  p->activity();
  p->activity();
  p->activity();
  *((void**)&e) = fake_vt;
  p->activity();
  p->activity();
  p->activity();
#else
  Entity *e = new Entity();
  e->activity();
  e->activity();
  e->activity();
  *(void **)e = fake_vt;
  e->activity();
  e->activity();
  e->activity();
#endif
  return 0;
}
