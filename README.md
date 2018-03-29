# Monte-Carlo-Checkers Match
This program puts the monte-carlo algorithm to the test in a game of checkers. Everyone knows how a game of checkers is played. If not, you suck.

## Description
This section explains the reasoning behind the madness

### Monte-Carlo Method Explained
In computing, a Monte Carlo algorithm is a randomized algorithm whose output may be incorrect with a certain (typically small) probability. Two examples of such algorithms are Karger–Stein algorithm and Monte Carlo algorithm for minimum Feedback arc set.

The name refers to the grand casino in the Principality of Monaco at Monte Carlo, which is well-known around the world as an icon of gambling. The term "Monte Carlo" was first introduced in 1947 by Nicholas Metropolis.

The related class of Las Vegas algorithms are also randomized, but in a different way: they take an amount of time that varies randomly, but always produce the correct answer.

Despite it's close attachment to the gambling industry, it is not possible for a Monte Carlo algorithm to be converted into a Las Vegas algorithm even if there exists a procedure to verify that the output produced by the algorithm is indeed correct. Even if a resulting Las Vegas algorithm were to repeatedly run the Monte Carlo algorithm there is still no guarantee that any of the runs produces an output that can be verified to be correct.

### How does this program work???
This program will have several different features and a bit of flexibility for the person running the program to play around with. It is my intention to have a Monte-Carlo algorithm play a randomly generated algorithm in a game of checkers, after a certain amount of games, save the tree of moves made by Monte-Carlo and allow the user to play against the weighted tree of moves that it came up with. There will also be an option for the Monte-Carlo method to play against another Monte-Carlo method to make things interesting and so it will be a little smarter than a stupid rock.
