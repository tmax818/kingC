# chapter 5 selection statements

>Although C as many operators, it has relatively few statements.

- `return`
- [expression statement](../chapter04/README.md)
- C's remaining statements fall into three categories:
  - selection - `if` and `switch`
  - iteration - `while`, `do`, `for`
  - jump - `break`, `continue`, `goto`, and `return`
- the only other statements are compound

## 5.1 logical expressions

### relational operators

- `<` less than
- `>` greater than
- `<=` less than or equal
- `>=` greater than or equal

### equality operators

- `==` equal to
- `!=` not equal to


### logical operators

- `!` negation
- `&&` and
- `||` or

## 5.2 the `if` statement

```C
if(expression) statement
```

- `()` are mandatory

### compound statements

```C
{statement}
```

- putting `{}` around a group of statements treats them as a single statement


### the `else` clause

```C
if (expression) statement else statement

```

### cascaded `if` statements

- [cascadeif.c](./code/cascadeif.c)

```C
if(expression)
    statement
else if (expression)
    statement
...
else
    statement

```
### program: calculating a broker's commission

- [broker.c](./code/broker.c)


### the "dangling `else`" problem
### conditional expressions aka ternary operator

```C
expr1 ? expr2 : expr3
```
### boolean values in C89
### boolean values in C99

## 5.3 the `switch` statement

### the role of the `break` statement
### program: printing a date in legal form