# C++ Palindrome Checker

A simple C++ console program that asks for a word, reverses it, and tells you whether the word is a palindrome (reads the same forward and backward).

## How It Works

1. The program asks the user to enter a word.
2. It loops through the word from the last character to the first, printing each character on its own line.
3. While looping, it builds a reversed copy of the word.
4. It compares the original word with the reversed copy.
5. If they match, the word is a palindrome. If not, it is not.

## Concepts Practiced

- Input and output with `cin` and `cout`
- Strings and indexing characters
- `for` loop that counts backward
- String concatenation using `+=`
- `if`/`else` conditions and string comparison

## Requirements

- A C++ compiler such as g++

## How to Compile and Run

```bash
g++ palindrome.cpp -o palindrome
./palindrome
```

## Sample Output

```
Enter a word: level
l
e
v
e
l

The word level is a palindrome.
```

```
Enter a word: hello
o
l
l
e
h

The word hello is not a palindrome.
```

## Notes

- The check is case-sensitive, so "Level" is not treated as a palindrome.
- Only one word can be entered (input stops at the first space).

## Possible Improvements

- Ignore uppercase and lowercase differences
- Accept full sentences using `getline`
- Move the checking logic into its own function
