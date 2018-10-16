#include "child.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void child_print(struct Child *self) {
    printf("Child %p\n", (void *)self);
}

static struct Child child_new() {
    struct Child c = {};
    c.parent = Parent.new();
    c.parent.print = &child_print;
    return c;
}

const struct ChildClass Child = {
    .new = &child_new,
};
