#include <stdio.h>
#include <stdlib.h>

#include "child.h"
#include "parent.h"

int main(int argc, char const *argv[]) {
    struct Parent p = Parent.new();
    p.vtable->print(&p);
    struct Child c = Child.new();
    c.parent.vtable->print(&c.parent);
    c.parent.vtable->super->print(&c.parent);
    struct Parent *pc = (struct Parent *)&c;
    pc->vtable->print(pc);
    pc->vtable->super->print(pc);
    return 0;
}
