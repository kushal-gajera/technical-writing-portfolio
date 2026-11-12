# Git Command Cheat Sheet

| Command | What it does |
|---|---|
| `git init` | Creates a repository in the current folder |
| `git clone URL` | Copies a remote repository |
| `git status` | Shows the current working-tree state |
| `git add FILE` | Stages a file |
| `git add .` | Stages all changes in the current folder |
| `git commit -m "message"` | Records staged changes |
| `git log --oneline` | Shows compact commit history |
| `git diff` | Shows unstaged changes |
| `git branch` | Lists local branches |
| `git switch -c NAME` | Creates and switches to a branch |
| `git merge NAME` | Merges a branch into the current branch |
| `git remote -v` | Lists remote repositories |
| `git pull` | Fetches and integrates remote changes |
| `git push` | Sends commits to a remote |
| `git restore FILE` | Discards unstaged changes in a file |
| `git rm FILE` | Removes a tracked file |

## A safe daily routine

1. Run `git status` before editing or committing.
2. Review changes with `git diff`.
3. Stage only the files that belong in the commit.
4. Write a short message that describes the actual change.
5. Push the branch and review it on GitHub.
