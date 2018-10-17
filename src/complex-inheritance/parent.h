#ifndef PARENT_H
#define PARENT_H

struct ParentOps;

struct Parent {
    struct ParentOps *vtable;
};

struct ParentOps {
    struct ParentOps *super;
    void (*print)(struct Parent *self);
};

extern const struct ParentClass { struct Parent (*new)(); } Parent;

#endif /* PARENT_H */
