module;
export module Foo;

#define ANSWER 42

export namespace Bar {
int f_internal() { return ANSWER; }

int f() { return f_internal(); }
} // namespace Bar
