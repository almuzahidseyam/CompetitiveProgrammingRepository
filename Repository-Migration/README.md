# Repository consolidation

All original Brainsoft files are in `Brainsoft-Archive/` (11 files). All original Codeforces files are in `OnlineJudgeSoutions/Codeforces_Archive/` (9 files). The source Git trees match these directories exactly, including file bytes and modes. See `verification.json` for source commits and tree hashes.

Both original main-branch histories are parents of the consolidation merge commit, retaining original commit IDs, authors, dates and earlier file versions. Source branch tips are also retained as `archive/brainsoft/main` and `archive/codeforces/main` tags. No original main-repository files were removed.

CompetitiveProgrammingRepository (8 stars at verification) and Codeforces (7 stars) are retained. Only the zero-star Brainsoft repository is eligible for deletion after remote verification. Brainsoft had no issues, pull requests, releases, tags, workflow runs/artifacts, or wiki content found. Local Git bundles and GitHub metadata snapshots were saved before changes.

## 128-bit probabilistic Miller–Rabin

`Code Library, Templates and CheatSheets/Miller_Rabin_128bit.cpp` accepts a test count followed by decimal unsigned integers in [0, 2^128 - 1]. Output is `Prime` (probable prime), `Composite`, or `Invalid input`. Compile with GCC/Clang supporting unsigned 128-bit integers and C++17.

Overflow-safe modular addition and multiplication cover the entire unsigned 128-bit range. The default is 64 rounds with rejection sampling across the complete witness interval. Under independent uniform witnesses, the false-prime bound for a fixed composite is 4^-64 = 2^-128. The implementation uses a randomly seeded Mersenne Twister for competitive programming, not a cryptographic random generator or a primality proof.

Validation: 1,377 cases checked against SymPy, including small integers, random 128-bit values, large primes, prime squares, known strong pseudoprimes and unsigned limits; five invalid/overflowing inputs were rejected. Source algorithm: https://cacr.uwaterloo.ca/hac/about/chap4.pdf (Algorithm 4.24).
