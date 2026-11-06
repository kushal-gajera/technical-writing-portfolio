# Git, GitHub and SVN — version control guide

**Git** is a distributed version control system: each clone contains repository history. **GitHub** hosts Git repositories and adds collaboration features such as issues, pull requests and reviews. **SVN (Subversion)** is a centralised version control system.

## Configure Git once

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global init.defaultBranch main
```

Never commit passwords or access tokens.

## Everyday workflow

```bash
git status
git add .
git commit -m "docs: add report formatting examples"
git log --oneline --graph
git push
```

## Branch workflow

```bash
git switch -c docs/add-learning-reflection
# edit and test files
git add docs/learning-journal.md
git commit -m "docs: add learning reflection"
git push -u origin docs/add-learning-reflection
```

Open a pull request on GitHub, review the diff, discuss changes and merge when approved.

## Git versus SVN

| Concept | Git | SVN |
|---|---|---|
| Model | Distributed | Centralised client-server |
| Local history | Full history in a clone | Working copy relies on central repository |
| Save operation | `git commit` creates a local commit | `svn commit` sends changes to central server |
| Update | `git pull` fetches and integrates | `svn update` updates working copy |
| Branching | Lightweight branches | Branches commonly represented as repository paths |

## Good habits

- Commit focused changes with descriptive messages.
- Review `git diff` before committing.
- Pull remote changes before collaborating.
- Keep generated output out of version control.
- Never commit credentials.

See the [command cheat sheet](command-cheatsheet.md).
