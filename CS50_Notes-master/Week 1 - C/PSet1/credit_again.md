# Credit C Program...Again

## Round 2 — FIGHT!
I had another go at this problem. It's probably still not as efficient as it could be, but the amount of code I used has been cut in half. The code can definitely be improved, I know that, but I'm going to move onto the next CS50 lesson instead of obsess over this one. Hopefully I'll come back to it in the future as my skills improve.

### The main difficulty
I used a for loop, because as I was running the checksum test for it, I was running into issues unless the loop had a fixed length. Eventually I found a way to set the length without needing to repeat that loop for each series of cards. I still think there's a way to run the checksum without needing the fixed length, but that's something I hope to discover in the future.

### Adding more cards
If another card needs to be added, there's no more copy/pasting required. All the user needs is the minimum possible number for the card and the maximum possible number, as well as the card lengths. The min/max numbers will determine the range of the long long, and the card length (divided by 2 and rounded up) is input into the loop. After that an if/else statement is added for the new card.

## Future of this program
I do hope to improve this program in the future, or at least learn from it. I spent an entire day working on it, and I'm pretty burnt out — my brain needs a break. I did attempt to work on a version 3 today, but I don't have the mental energy to do so. Still, I'm open to any comments/questions, but don't expect me to go back to this program for a while.