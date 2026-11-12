# 05 | Git

> **Every change has a history. Git helps you manage it.**

---

## 01. What Is Version Control?

Version control is a system that records changes to files over time. It allows us to inspect previous versions, compare changes and recover earlier work.

Without version control, projects can end up with files such as:

```text
project.py
project-final.py
project-final-new.py
project-final-latest.py
```

Version control solves this problem by maintaining an organised history.

## 02. What Is Git?

Git is a distributed version control system used to track changes in files and manage project development.

**Why use Git?**

- Tracks changes over time.
- Maintains project history.
- Helps recover earlier versions.
- Supports parallel development.
- Makes collaboration easier.

### Git vs GitHub

| Git | GitHub |
|---|---|
| Version control system | Hosting and collaboration platform |
| Works locally | Provides remote repositories |
| Tracks project changes | Helps share and review projects |

## 03. Installing and Configuring Git

**macOS (Homebrew)**

```bash
brew install git
```

**Ubuntu / Debian**

```bash
sudo apt update
sudo apt install git
```

**Windows:** download Git from [git-scm.com/downloads](https://git-scm.com/downloads).

Verify installation:

```bash
git --version
```

Set your name and email:

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

## 04. Creating a Repository

```bash
mkdir my-project
cd my-project
git init
```

Git creates a hidden `.git` directory to store repository information.

## 05. Understanding the Git Workflow

```text
Working Directory
       |
       | git add
       v
  Staging Area
       |
       | git commit
       v
  Local Repository
       |
       | git push
       v
 Remote Repository
```

- **Working directory:** where files are created and edited.
- **Staging area:** where selected changes are prepared for a commit.
- **Local repository:** where committed history is stored.
- **Remote repository:** a shared repository hosted elsewhere, such as GitHub.

## 06. Essential Git Commands

| Command | Purpose |
|---|---|
| `git status` | Shows modified, staged and untracked files |
| `git add file` | Stages a particular file |
| `git add .` | Stages changes under the current directory |
| `git commit -m "message"` | Records staged changes |
| `git log --oneline` | Displays compact history |
| `git diff` | Shows unstaged changes |
| `git diff --staged` | Shows staged changes |
| `git branch` | Lists branches |
| `git switch -c name` | Creates and switches to a branch |
| `git merge name` | Merges a branch |
| `git push` | Sends commits to a remote |

See the [Git Command Cheat Sheet](git-command-cheatsheet.md) for more commands.

## 07. Branching

Branches let developers work on different changes independently.

```bash
git switch -c feature-login
# Make changes
git add .
git commit -m "Add login example"
git push -u origin feature-login
```

## 08. Practical Activity

Create a repository, add a README, make two focused commits and inspect the history with `git log --oneline`.

---

[Back: Google Docs](../04-Google-Docs/README.md) · [Portfolio Home](../README.md) · [Next: GitHub](../06-GitHub/README.md)
