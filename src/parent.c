#include "parent.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void parent_print(struct Parent *self) {
    printf("Parent %p\n", (void *)self);
}

static struct Parent parent_new() {
    return (struct Parent){
        .print = &parent_print,
    };
}

const struct ParentClass Parent = {
    .new = &parent_new,
};
