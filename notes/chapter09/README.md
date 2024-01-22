# chapter 9 functions

>A function is simply a series of statements that have been grouped together and given a name. ... Functions are the building blocks of C programs. Each function is essentially a small program, with its own declarations and statements.



## 9.1 defining and calling functions

### program: computing averages

- [average.c](./average.c)

### program: printing a countdown

- [countdown.c](./countdown.c)


### program: printing a pun (revisited)

- [pun2.c](./pun2.c)


### function definitions

```c
return-type function-name( parameters) {
    declarations;
    statements;
}
```

- functions cannot return arrays(no other restrictions)
- `void` means no return value
- return type can be on a separate line above the function

```c
void stub(){}
```

### function calls

- pretty basic

### program: testing whether a number is prime

- [prime.c](./prime.c)

## 9.2 function declarations

- aka ***function prototypes***
```c
return-type function-name(parameters);
```

- only parameter types are required

## 9.3 arguments

- ***parameters*** appear in function definitions, they're dummy names that represent values to be supplied when the function is called.
- ***arguments*** are expressions that appear in function calls.

- [decompose](./decompose.c)

### argument conversions

- don't rely on default argument promotions


### array arguments

>Arrays are often used as arguments. When a function parameter is a noe-dimensional array, the length of the array can be (and is normally) left unspecified.

- if the function needs the length of the array, we need to supply it as an argument

>If a parameter is a multidimensional array, only the length of the first dimension may be omitted when the parameter is declared.

- we can work around this by passing an array of pointers


### variable-length parameters

```c
int sum_array(int n, int a[n]){}
```


### using `static` in array parameter declarations


### compound literals

## 9.4 the `return` statement

## 9.5 program termination

### the `exit` function

## 9.6 recursion
 
### the quicksort algorithm
### program: quicksort

- [qsort.c](./qsort.c)