## Problem Statement
The goal for this feature is to allow the user to highlight multiple cells at once
And also be able to de-select all highlighted cells with backspace

## Types Involved
Main, Board, and maybe input

## Public Interface


## Inputs and Outputs
Input: Left Click
Output: Highlighted cells

## Edge Cases
Doesn't click withing the bounds of any cells


## Three Test Cases
Normal: click multiple cells and hits backspace
Edge: 
Boundary: click all cells, and then hit backspace

## Design Decision
There were two main branches that I chose for the design of this feature
The first was choosing for the cells to be deselected when clicked again, while keeping what
is stored in the cell.
The second was for selection to be handled withing board instead of main. While it requires
more code, I think splitting up where everything is located is cleaner.