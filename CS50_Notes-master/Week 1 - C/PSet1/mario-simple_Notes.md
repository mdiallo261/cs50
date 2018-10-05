# Mario Simple Notes

## My struggle

This isn't my first foray into "programming," before this I learned some JavaScript. However, I wasn't able to grasp programming in general which is why I'm taking the CS50 course on edX, and it's certainly helping. Now I'm starting to have a better understanding of how this programming thing is supposed to work...I think.

### The real problem
There's a similar half-pyramid program you can build with JavaScript, I remember seeing it in the Eloquent JavaScript book. And that's pretty easy, requiring only a few lines of code. That's because JavaScript handles differently from C, it actually does a lot of things "under the hood" that you need to program into C (at least from my current experience).

One of those is string concatenation, which I looked up in C, but the answers on Stack Overflow confused me. In JavaScript you'd just loop through *var hash += "#"* and that would be it. But I couldn't find an easy, understandable way of concatenation in C, so the JavaScript way was out.

### Cheating
Okay, yes, I actually did look online for a code solution, but the one I found confused me. I forget everything about that solution, except one thing that stuck out, a negative loop, but more on that later.

However, I'm glad the solution I found made no sense because I was determined to figure this out on my own.

## The Breakthrough
What kept on bugging me was "how can I concat in a way that makes sense?" I knew I had to use a loop within a loop, I actually figured this part out on my own. For the outer loop I used the **$** to represent a space, and the inner loop used the **hash** for the blocks. But every time I ran the loop it printed **?########** 8 times (fixed length of 8 on both loops just for testing). This was getting frustrating.

### Values
Wait, of course it's printing it like that, the value of the inner loop is preset to 8 — that's what it's supposed to do! How about if the inner loop length is set to a variable, and the outer loop value increments that variable by one, will it do what I think it's supposed to do....**YES!**

The program runs, and on line 1 it prints #, line 2 ##...and so on...until the loop is completed. This isn't quite the half-pyramid the lesson wants me to do, but it's a step in the right direction.

### Negative Loop
Remember that negative loop I mentioned in the *Cheating* section, I kept on wondering why it was used, but that also made sense. This half-pyramid is supposed to increase in height from left to right, and the space character needs to occupy the *"empty section"* of the pyramid. If the space character runs in a normal positive loop, the pyramid won't look quite right, but what about a negative loop?

Well, actually, if it runs in a negative loop, it'll be an "upside-down" half-pyramid. So I ran other test, this time in the outer loop I decremented a variable by 1, and the inner loop's length was assigned that variable. And, yup, making more progress!

## Putting it all together
I worked out a few more kinks, tinkered around some more, but finally the half-pyramid runs how it should according to the lesson. Is it perfect code — NOPE! Is it the best code — NOPE! Is it even written in a readable order...err, not as well it should, but I left decent comments.

Still it runs, and while the code can be cleaned up, I'm proud of myself for actually going at this and figuring it out. It wasn't easy, it won't get any easier, but at least it's starting to make sense.