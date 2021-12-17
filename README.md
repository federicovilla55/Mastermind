# Mastermind
Implementation of the [Mastermind](https://github.com/Tresza24) game in [ANSI-C](https://en.wikipedia.org/wiki/ANSI_C).

This work was done during 5th and last laboratory of the course of Fundamentals of Informatics at [Polytechnic of Milan](https://www.polimi.it/).

Made by [federicovilla55](https://github.com/federicovilla55/), [marcodotsh](https://github.com/marcodotsh/) and [Tresza24](https://github.com/Tresza24).

Rules of Mastermind
-------------------
There are two players: the codebreaker and the codemaster.
The codemaster creates a secret four-digit sequence of coloured pegs.
To win, the codebreaker must guess the secret sequence of pegs within a set number of attempts.

After each attempt of the codebreaker, the codemaster should tell:
- how many pegs he guess correctly (these are the black pegs),
- how many pegs have the correct color but the wrong position (these are the white pegs).

Build
-----
Run `make`, then run `make clean` if you want to delete object files.

Play
---
Run `./mastermind.out`.
Enjoy.

