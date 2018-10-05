# Three Weeks of Week 2

I finished Week 2 of CS50, and it was a rough (couple of weeks). PSet 2 is the most difficult one I've faced so far, and I'm sure it gets tougher, but at least I completed it. For PSet 1, I did both the *least comfortable* and *more comfortable* problems, wanting to give myself a challenge, but in PSet 2 least comfortable whooped me real good. It's humbling, eye-opening, and educational. 

## Problem Set 2
All three problems I completed mainly required knowledge of arrays and loops. The programmer needed to know how to loop through characters in a string, and output only certain characters in that string. For two of the programs, the characters were manipulated with encryption (Caesar cipher and Vigenere cipher). Knowing how ASCII values work was also important, though not as difficult.

This wasn't easy for someone like me, who wants the program to work simply because I demand it. The alphabet characters need to be converted to ASCII numbers, then back to encrypted alphabet characters. There's a lot more going on in-between, but that's the gist of it. A loop was required since in C a string is an array of characters. I've done simple things with loops in the past, but this one really pushed me, and I'm glad it did. Now I truly see the value of loops in programming.

Another thing I understood is math in programming. I'm sure most people reading those words are laughing, of course computer programs require math! But allow me to explain....  
These programs need to complete a specific task, and for them to run accurately mathematical checks are needed. In both Caesar and Vigenere, modulos was needed, and without it the program would fail. And that's how I learned practical applications for math.

## Pre-Coding
One important process I should use more often is doing what's necessary before any actual coding. Sometimes this is known as writing pseudocode, but I find jumping right into pseudocode overwhelming. Actually, for some reason I find it easier to jump write into coding as opposed to coming up with pseudocode first, and I think it's because of me still understanding programming and programming concepts. With all that said, writing pseudocode makes writing the actual code that much easier.

The first step in my pre coding process should be writing a summary of how the program should work. This shouldn't include anything technical or be step-by-step instructions. Just simply describe how the program starts, what happens during it, and what it outputs.

After that I can break it down into steps, and these steps can be technical. This still isn't pseudocode, but now it becomes more like instructions I can follow if I decide to write the code at this point.

Finally there's the pseudocode. And it'll be much easier to write after doing the above steps instead of jumping straight into it. Now it'll be technical and describe the program steps, and I can use this as a template for writing the code.

## Program Instructions
A computer isn't a human, and yes I did just say that. But since it's not human it doesn't care about intent or feeling or meaning, all it cares for is the literal instructions. If a computer is told to walk forward, it will walk forward forever until it's told to stop, whereas a human (usually) has more common sense than that. 

As I struggled with this Problem Set, I didn't realize how literally my instructions are received by the program. One example I could think of is with a counter and a loop. Within the loop I had it set so that variable x is 0, and it increments by 1 for every iteration of the loop. And boy was I annoyed when variable x never equaled anything higher than 1...what was I doing wrong?

Wait a minute, **WITHIN** the loop variable x initially is 0, that means whenever the loop runs x will always be 0. The computer doesn't care that I intend for x to increase in value each time the loop runs, because all it sees is x = 0 each time the loop runs. I fixed this by setting x to 0 outside the loop. Now every time the loop iterates, the value of x increases by 1.