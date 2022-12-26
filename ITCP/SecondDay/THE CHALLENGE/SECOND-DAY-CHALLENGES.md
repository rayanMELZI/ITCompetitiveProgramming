
# ITCompetitiveProgramming Second day challenges 

## Probleme 01: LINUX 

Ahmed is a student who loves LINUX, he uses it nearly everyday, one day his teacher asked his class to write a report about all the courses they took during this last semester and he asked them to do this in assignment in pairs... ofc, Ahmed did find someone to work with, yet he was so inactive and lazy , he didnt help him much.... after finishing the assigment, Ahmed got in a fight with his mate so he dicided to remove his name from all the assignment files .. yet he wasnt sure how to do it.. in this challenge you are asked to help Ahmed by finding the suitable command that will delete the phrase " Assia ben daoud " from all the text files (with a .txt extension) recursively.

Note that some files are in subdirectories so you will need to search for them.



## Probleme 02 : CRYPTOGRAPHY

Given the string "label", XOR each character with the integer 13. Convert these integers back to a string and submit the flag as itcFLAG{new_string}.

## Probleme 03: 

 check if the entered year is a leap year or not...
 a year is a leap one if it's divisible by 4 and if it's not divisible by 100 or is divisible by 400


## Probleme 04 : Recursion

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple **rules**: 

```
1. Only one disc move at time
2. Follow order smaller always on the top of bigger
3. Only top disc must be move
4. 

Here we considered three poles 
s=source d=destination h=helper
i/p: 1
o/p: Move disc 1 from s to d
i/p: 2
o/p: Move disc 1 from s to h
         Move disc 2 from s to d
         Move disc 1 from h to d
i/p: 3
o/p:Move disc 1 from s to d
        Move disc 2 from s to h
        Move disc 1 from d to h
        Move disc 3 from s to d
        Move disc 1 from h to s
        Move disc 2 from h to d
        Move disc 1 from s to d
No. of move : 2^n-1
 ```

implement it rescursivly

## Probleme 05: Sort Algorithm

implement the QuickSort Algorithm

## Problem 06: Strings

KMP Algorithm is also called as Knuth, Morris, and Pratt string searching algorithm
This algorithm uses the previous comparison data.

It uses a partial match table to analyze the pattern structure. 

The goal of the table is to allow the algorithm not to match any character of pattern more than once. 

The basic idea behind KMP’s algorithm is: 
whenever we detect a mismatch (after some matches), we already know some of the characters in the text of the next window.
We take advantage of this information to avoid matching the characters that we know will anyway match. 
We need to know about proper prefixes and proper suffixes first.
Proper prefix - All the characters in a string, with one or more cut off the end. 
“C”, “Co”, “Cod”, and “Codi” are all the proper prefixes of “Coding”.
Profer suffix - All the characters in a string, with one or more cut off the beginning. 
“adrid”, “drid”, “rid”, “id”, and “d” are all proper suffixes of “Madrid”.
The value of the partial table is the "length of the longest proper prefix that matches a proper suffix".
```
Pseudocode - 
if table[partial_match_length] > 1:
    skip ahead by partial_match_length - table[partial_match_length - 1] characters
else:
    don’t get to skip ahead by partial_match_length - table[partial_match_length - 1] characters. See next partial match.
```

Let’s say we’re matching the pattern “abababca” against the text “bacbababaabcbab”.
Here’s our partial match table again for easy reference
```
char:  | a | b | a | b | a | b | c | a |
index: | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 
value: | 0 | 0 | 1 | 2 | 3 | 4 | 0 | 1 |
```
Example - 
```
1. The first match is at index 1.
bacbababaabcbab
 |
 abababca
Hence partial_match_length = 1
```
See the next partial match and so on.
Repeat the steps till the last partial match is found.


## Problem 07: Wanna play ?


Kevin and Stuart want to play the 'The Minion Game'.

Game Rules

```
Both players are given the same string S .
Both players have to make substrings using the letters of the string S.
Stuart has to make words starting with consonants.
Kevin has to make words starting with vowels.
The game ends when both players have made all possible substrings.

```

Scoring
A player gets +1 point for each occurrence of the substring in the string S.

## Problem 08: EASY PEASY

Given an integer array containing M × N elements, construct an M × N matrix from it in spiral order.

## Problem 09: intersection

Given two arrays a1 & a2 , you've to return their intersectoins 
Example : 
```
a1=[-9,1,2,3,4,0,-2] , a2=[2,8,-1,4]
a3=[2,4] or a3=[4,2]
```
## Problem 10: 

Check if in array in monotone or not 
monotone array : 
```
a=[1,2,2,4,5]
b=[10,8,7,6,6,0,-1]
c=[0,2,1] NON MONOTONE
```
## Problem 11:

Detect capitals in words, return true if all leters are capitals,
word =" DZ " //true
word = " ITc" // false

## Problem 12: 

reverse the the given string

Ex :
```
["h","e","l","l","o"] // ["o","l","l","e","h"]
```

## Problem 13: 

given two strings , check if they're anagrams 
(Any word that exactly reproduces the letters in another order is an anagram)
```
X = "silent", Y = "listen" // true
X = "incest", Y = "insect" // true
```
## Problem 14:
User gives u a number n , generate binary numbers between 1 and n 
n = 10

```{"1", "10", "11", "100", "101", "110", "111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111", "10000"}```

## Problem 15:
You have an array sorted circulary , find the total number of times the array is rotated to be sorted
```
a=[8, 9, 10, 2, 5, 6] // 3
b=[2, 5, 6, 8, 9, 10] // 0
```
## Problem 16:
given an integer x , return reversed-x 
```
x = -1230 
x= -321
```
## Problem 17:

In Excel file :
rows are numbered like : 1,2,3 .... 
columns are numbered like : A,B..Z ... AA..AZ , BA...
where : A=>1 / B=> 2 ...Z=> 26

given a row number , find the column number 
## Problem 18: 

Given a number x , return if n is an ugly number or not
Ugly number is a positive one whose prime factors are limited to 2,3,5
Ex : 
```6  ugly , 6=2*3```
Ex : 
```14 not ugly , 14=7*2 ```

## Problem 19: 

A perfect number is a positive integer , whereit is equal to the sum of its positive divisors
Ex = 
```28 // true , because 28 = 1+2+4+7+14```

## Problem 20: 
A prime number is a number greater than 1 , which is only divisible by 1 and its self 
check if given n is a prime number or not

## Problem 21: 
On dit qu'un tableau contient un cycle si une case est visitée plus d'une fois en parcourant la liste. Étant donné un index vers l'en-tête d'un vecteur, déterminez s'il contient un cycle. Si c'est le cas, retournez 1. Sinon, retournez 0 _**PS: essayer d'appliqeur le minimum possible nombre d'opérations et d'itérations**_ 

## Problem 22:
Soit le language L(G) généré par la grammaire G=<T,N,SP> tel que:

```
T={a,b} 
N ={S,A,B,C}
P : 
    S -> AB
    A -> aA/bA/ab
    B->bC
    C-> aC/bC/ε

```
Ecrire un programme qui permet de générer tous les mots de L(G) d'une longuer donnée n ( n>=0) lors de l'évaluation l'utilisateur fixera en entrée n, votre programme devra alors générer tous les mots de L(G) de longueur n

## Problem 22:

Write a program that automatically converts English text to Morse code and vice versa.

## Problem 23:
Write a program that finds the longest palindromic substring of a given string. Try to be as efficient as possible!

## Problem 24:
Write function that translates a text to Pig Latin and back. 
```English is translated to Pig Latin by taking the first letter of every word, moving it to the end of the word and adding ‘ay’. “The quick brown fox” becomes “Hetay uickqay rownbay oxfay”.```

## Problem 25:
Write a function that computes the list of the first 100 Fibonacci numbers. The first two Fibonacci numbers are 1 and 1. The n+1-st Fibonacci number can be computed by adding the n-th and the n-1-th Fibonacci number. The first few are therefore 1, 1, 1+1=2, 1+2=3, 2+3=5, 3+5=8.

## Problem 26:

Write a function that takes a list of strings an prints them, one per line, in a rectangular frame. For example the list ["AYOUB", "IS", "!BEST", "ITC", "BNADM"] gets printed as:
```
*********
* AYOUB *
* IS    *
* !BEST *
* ITC   *
* BNADM *
*********
 ```
 ## Problem 27:
 Given two numbers, return true if the sum of both numbers is less than 100. Otherwise return false
 
 ## Problem 28:
 
 In this challenge, you will be given three integers n, a and b as input which will tell you how many lines to print and when to print IT or CCC.

Write a program that prints the numbers from 1 through n. But for multiples of a print “IT” instead of the number and for the multiples of b print “CCC”. For numbers which are multiples of both a and b print “ITCCC”.

Note: Print each item space-separated, and each test case on its own line.

## Problem 29:

Create a function that takes two numbers as arguments and returns their sum.

Examples
```
addition(3, 2) ➞ 5

addition(-3, -6) ➞ -9

addition(7, 3) ➞ 10
```

## Probelm 30:

in this challenge we want you to write your favorite/most used function ;) 

**GOOD LUCK** 🚀


 
