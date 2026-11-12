# Git and GitHub

Git is a distributed version-control system. GitHub hosts Git repositories and provides tools for collaboration, review and sharing.

## Git and GitHub

| Git | GitHub |
|---|---|
| Runs on your computer | Hosts repositories online |
| Tracks file changes in commits | Makes repositories accessible to collaborators |
| Supports branches and merges | Adds pull requests, issues and code review |

## Configure Git

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

## Basic Git workflow

```bash
git status
git add .
git commit -m "Add report examples"
git push
```

- `status` shows changed files.
- `add` stages selected changes.
- `commit` records a snapshot in local history.
- `push` sends local commits to a remote repository.

## Create and publish a repository

```bash
git init
git add .
git commit -m "Add project files"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```

## Branches and collaboration

```bash
git switch -c add-report-section
# Make and test your changes
git add .
git commit -m "Add report section"
git push -u origin add-report-section
```

On GitHub, open a pull request to discuss and review the branch before merging it into `main`.

## GitHub features

- **Repositories:** store project files and their history.
- **README:** explain the purpose and use of a project.
- **Issues:** track questions, bugs and tasks.
- **Pull requests:** propose and review changes.
- **Releases:** mark useful versions of a project.

## Git and SVN

Git is distributed: every clone contains repository history. SVN (Subversion) is centralised: the central server is the main repository. Both tools track revisions and support collaborative development.

More: [Git command cheat sheet](git-command-cheatsheet.md) · [GitHub workflow](github-workflow.md)

Never commit passwords, API keys, access tokens or private information.
