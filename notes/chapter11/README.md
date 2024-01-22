# chapter 11 pointers

## 11.1 pointer variables

- computer memory is divided into *bytes* 
- each *byte* has an address.

### declaring pointer variables

- [pointers.c](./pointers.c)

## 11.2 the address and indirection operators

>C provides a pair of operators designed for use with pointers.

- `&` (address) operator

```c
&x; // the memory address of variable x

```
- `*` (indirection) operator

- the following [code](./pointers.c) compiles and runs!
```C
#include <stdio.h>
int main(){
    int x = 42;
    printf("%d\n", *&x);   
}
```

### the address operator

```c
int i, *p;  /* points to no where in particular */
p = &i; /* now p points at i */
```

- it's possible to initialize a pointer when we declare it:

```c
int i;
int *p = &i;
```
or 

```c
int i, *p = &i;
```
### the indirection operator

>Once a pointer variable points to an object, we can use the `*` to access what's stored in the object.

- `*p` is an *alias* for i as long at it points to it


## 11.3 pointer assignment

>C allows the assignment operator to copy pointers, provided that they have the same type.

```c
int i, j, *p, *q;
p = &i;
q = p;
```

- don't confuse `*p = *q` with `p = q`

## 11.4 pointers as arguments

> What are pointers good for?

- C passes arguments to functions by value

- see [9.3](../chapter09/README.md) for `decompose` function.


### program: finding the largest and smallest elements in an array

- [maxmin.c](./code/maxmin.c)

### using `const` to protect arguments

- pointers can be `const` for efficiency;

## 11.5 pointers and return values

- see [larger.c](./code/larger.c)



