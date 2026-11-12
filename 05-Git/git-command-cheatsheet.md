# Git Command Cheat Sheet

> **Common commands for everyday Git work.**

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
| `git diff --staged` | Shows staged changes |
| `git branch` | Lists local branches |
| `git switch -c NAME` | Creates and switches to a branch |
| `git merge NAME` | Merges a branch into the current branch |
| `git remote -v` | Lists remote repositories |
| `git pull` | Fetches and integrates remote changes |
| `git push` | Sends commits to a remote |
| `git restore FILE` | Discards unstaged changes in a file |
| `git rm FILE` | Removes a tracked file |

## A Safe Daily Routine

1. Run `git status` before committing.
2. Review changes with `git diff`.
3. Stage only the files related to your change.
4. Write a short commit message that describes the actual work.
5. Push the branch and review it on GitHub.

---

[Back to Git](README.md) · [Portfolio Home](../README.md)
