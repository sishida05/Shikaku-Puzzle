## Final Reflection
I've really just cut or stubbed most things from my initial plan as I was overly ambitious and ran into a plethora of technical difficulties
Right now the program is an interactable 5x5 grid that has selectable cells via left click, able to input a character (was mainly for proof of concept), and can be cleared
with backspace.

# Plan vs. Reality
My original plan was overly ambitious, which I was aware of. I wanted to create a random Shikaku puzzle generator that had variable difficulty, and would be sure to only
have a single correct solution.

In reality I got nowhere close to my goal. I spent the vast majority of my time attepmting to debug and figure out what was wrong with the little progress I had.
Menu - Cut
Difficulty - Cut
Random - Cut
Solvable - Cut
Interactable Grid - Implemented

# Design Decision You Would Change
First, I would vastly reduce the scope of my initial project, and actually try to learn how to properly implement SFML. I just dove headfirst into trying to get a grid going
that I never learned how to properly use SFML, and spent most of my time trying to get it to just run. I also greatly overestimated the amount of classes I would need, as much of SFML just sits in main and doesn't need/want a separate class.

# What You Learned
While I have learned how to use c++ and git/vs code/visual studio better, I feel like this also helped me understand how little I knew. Trying to keep the project consistent over the various places was a struggle, getting SFML to work at all was a nightmare.

Design wise, I learned that I should temper my expectations, and try to be more realistic. I knew that I wouldn't even be able to get close to my goal with my current skill level, but I still decided that was my plan.

I have definitely got better at debugging, but that still doesn't mean that it works. Updating cmake a million times, packaging the files to reduce size, removing vs code cache, trying to stop ctest from auto running, etc. These are all things I had no clue how to do before, and I frankly feel like I have no clue how to do them, however it's definitely more than I could previously do.

# What's Left To Finish
Basically everything is left to finish. From where I am I still need:
Menu - Adds polish and more user interaction
Difficulty - Allows for more user choice
Random Generated - Actually generates a random shikaku puzzle to fill the grid
Solvable - Makes sure that the puzzle generated is solvable via a signle solution

# Workflow Reflection
Bascially none of it has become natural to me.
I'm sure I'm doing something wrong, but I could never get a proper pull-request to go through. When I did work it would push directly to the origin and be updated.
When I did eventually get a new branch to be pushed, I couldn't create a pull request becuase they didn't share a commit history anymore as I had to clear it to reduce the file size as it exceeded 100mb. So I really feel like I have tripped and fallen at square zero when it comes to learning proper workflow via github.

# AI Use
I frequently utilized AI for debugging, and the creation of the second feature. While AI was immensely helpful for throwing my myriad of errors at to try and figure out how I broke it this time, it would still take me hours of trial and error to fix any given problem. With what small code I have, it stayed mostly true to my original goal, however the ability to input characters into the cells was an AI suggestion as proof of concept for later development. 