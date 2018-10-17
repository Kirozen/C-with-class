# C-with-class

## Inheritance

```cpp
class Parent {
  public:
  virtual void print() {
    printf("Parent %p\n", this);
  }
};

class Child : public Parent {
  public:
  void print() {
    printf("Child %p\n", this);
  }
};
```
