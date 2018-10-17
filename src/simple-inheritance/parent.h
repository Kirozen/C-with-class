#ifndef PARENT_H
#define PARENT_H

struct Parent {
    void (*print)(struct Parent *self);
};

extern const struct ParentClass { struct Parent (*new)(); } Parent;

#endif /* PARENT_H */
