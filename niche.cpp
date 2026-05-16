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

  std::cout << "=== Stack allocation test ===" << std::endl;
  Entity e;
  Entity *p = &e; // use pointer to prevent devirtualization
  p->activity();
  p->activity();
  p->activity();
  *((void **)&e) = fake_vt;
  p->activity();
  p->activity();
  p->activity();

  std::cout << "\n=== Heap allocation test ===" << std::endl;
  auto *e_heap = new Entity();
  e_heap->activity();
  e_heap->activity();
  e_heap->activity();
  *(void **)e_heap = fake_vt;
  e_heap->activity();
  e_heap->activity();
  e_heap->activity();
  delete e_heap;

  return 0;
}
