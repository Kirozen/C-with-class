#include "child.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void child_print(struct Child *self) {
    printf("Child %p\n", (void *)self);
}

static struct ParentOps child_ops = {
    .print = &child_print,
    .super = (void *)0,
};

static struct Child child_new() {
    struct Child c = {};
    struct Parent parent = Parent.new();
    c.parent = parent;
    c.parent.vtable = &child_ops;
    c.parent.vtable->super = parent.vtable;
    return c;
}

const struct ChildClass Child = {
    .new = &child_new,
};
