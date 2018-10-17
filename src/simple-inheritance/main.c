#include <stdio.h>
#include <stdlib.h>

#include "child.h"
#include "parent.h"

int main(int argc, char const *argv[]) {
    struct Parent p = Parent.new();
    p.print(&p);
    struct Child c = Child.new();
    c.parent.print(&c.parent);
    struct Parent *pc = (struct Parent *)&c;
    pc->print(pc);
    return 0;
}
