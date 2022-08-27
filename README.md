
# Table of contents
- [Introduction](#Introduction)
- [Search-algorithms](#search-algorithms)
  - [Linear Search](##linear-search)
  - [Binary Search](#binary-search)


# Introduction
An algorithm is a sequence of intructions used to solve a specific problem.
They are widely used throughout different IT sectors. This repository
contains my implementation of popular algorithms, written in the C
programming language.

# Search algorithms

## [Linear Search](https://github.com/vv01tz/algorithms/blob/master/search/linearSearch.c)
Linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
[src: wikipedia](https://en.wikipedia.org/wiki/Linear_search)

## Binary Search
Binary search is an algorithm that finds the position of a target value
within a sorted array. It compares the target value to the middle element
of the array. If they are not equal, the half in which the target cannot 
be in is "eliminated" and the search continues on the remaining half. This
process is repeated until the target value is found or if the remaining half being of an empty array.
- [Iterative implementation](./search/binarySearchIter.c).
- [Recursive implementation](./search/binarySearchRecur.c).