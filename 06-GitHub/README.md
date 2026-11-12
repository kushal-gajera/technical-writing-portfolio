# 06 | GitHub

> **Your projects deserve a place where they can grow.**

---

## 01. What Is GitHub?

GitHub is an online platform used to host Git repositories and collaborate on projects. It allows developers to share code, maintain project history, review contributions and work together.

## 02. Understanding a Repository

A repository (repo) is a place where a project's files and version history are stored.

```text
calculator/
├── README.md
├── main.cpp
├── .gitignore
└── docs/
```

The README introduces the project, while `.gitignore` specifies files that Git should ignore.

## 03. Creating a GitHub Repository

1. Visit [GitHub](https://github.com/).
2. Sign in to your account.
3. Select **New repository**.
4. Enter a repository name.
5. Choose Public or Private visibility.
6. Optionally add a README and `.gitignore`.
7. Select **Create repository**.

| Public repository | Private repository |
|---|---|
| Anyone can view it | Access is restricted |
| Useful for open projects | Useful for restricted projects |
| Can be shared publicly | Shared with authorised users |

## 04. Connecting a Local Repository

```bash
git remote add origin REPOSITORY_URL
git remote -v
git branch -M main
git push -u origin main
```

## 05. Cloning a Repository

Cloning creates a local copy of a remote repository, including its Git history.

```bash
git clone REPOSITORY_URL
```

## 06. Pushing, Pulling and Fetching

| Command | Purpose |
|---|---|
| `git push` | Upload local commits |
| `git pull` | Fetch and integrate remote changes |
| `git fetch` | Download remote updates without integrating |
| `git remote -v` | View configured remotes |

## 07. Branches and Pull Requests

A pull request is a proposal to merge changes from one branch into another.

Typical workflow:

1. Create a branch.
2. Make and commit changes.
3. Push the branch to GitHub.
4. Open a pull request.
5. Request a review.
6. Merge after review and approval.

**Important:** A pull request is not the same as the Git command `git pull`.

## 08. Forking a Repository

A fork is a separate hosted copy of another user's repository under your account. It is commonly used when contributing to projects you do not own.

| Fork | Clone |
|---|---|
| Creates a hosted copy | Creates a local copy |
| Happens on GitHub | Happens on your computer |
| Supports independent contributions | Supports local development |

## 09. Good Repository Habits

- Keep the README clear and useful.
- Organise folders and filenames consistently.
- Commit related changes together.
- Review changes before merging.
- Never commit passwords, API keys or access tokens.

---

[Back: Git](../05-Git/README.md) · [Portfolio Home](../README.md)
