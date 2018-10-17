#ifndef CHILD_H
#define CHILD_H

#include "parent.h"

struct Child {
    struct Parent parent;
};

extern const struct ChildClass { struct Child (*new)(); } Child;

#endif /* CHILD_H */
