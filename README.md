# Integer total: CS F201 lecture example

A small C project for the November 2, 4, and 6, 2026 lectures. This is a worked
classroom example, not an HW4 solution or a submission repository.

```sh
make
printf '3 10 20 30\n' | ./values
make test
make clean
```

Input begins with a count from 1 through 1000, followed by that many integers
from -1000 through 1000. The initial program prints `Total: 60` for the example.
Each successful allocation is released by main; the sum helper borrows its array.
The tests use C assertions. Recipe lines in Makefile begin with actual tabs.

During the Git lectures we add tests and change the output label on branches.
Use `git status`, `git diff`, and `git log --oneline --graph --all` to inspect the
state. The instructor demonstrates pushes; students can clone this public
example but create their own private repositories from the HW4 template.

A4: AI-assisted instructor example and teaching materials.
