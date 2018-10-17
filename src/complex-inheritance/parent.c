#include "parent.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void parent_print(struct Parent *self) {
    printf("Parent %p\n", (void *)self);
}

static struct ParentOps parent_ops = {
    .print = &parent_print,
    .super = (void *)0,
};

static void parent_init(struct Parent *self) {
    self->vtable = &parent_ops;
}

static struct Parent parent_new() {
    struct Parent ret = {0};
    parent_init(&ret);
    return ret;
}

const struct ParentClass Parent = {
    .new = &parent_new,
};
