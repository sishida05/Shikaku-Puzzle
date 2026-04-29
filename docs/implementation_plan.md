# Implementation Plan

## Feature 1: Main Menu
**Trigger**: User starts program and is greeted by a main menu
Description: When the user starts the program, opens a main menu that allows for
the selection of difficulty, and the explanation of how to play

## Feature 2: Selectable Difficulty
**Trigger**: User selects a difficulty ("Easy", "Medium", "Hard", "Expert") from the main menu
Description: Generates a random puzzle where the size is dictated by what difficulty the user selected from the menu.
It can range from Easy (8x8), Medium(12x12), Hard(20x20) to Expert(30x30)


## Feature 3: Random Solvable Puzzle
**Trigger**: User selects a difficulty
Description: Generates a random puzzle with a single solution made up of multiple rectangles containing a single cell each
that display the area of said rectangle, within a larger board determined by the selected difficulty. The rectangles within 
the board will vary in size to keep things interesting, and the proper method to filling the board should not be clear at
first glance.