# Working with GitHub

> **Publish a local project and work with others.**

---

## 01. Create a Repository

1. Sign in to GitHub.
2. Select **New repository**.
3. Enter a repository name and description.
4. Choose Public or Private visibility.
5. Create the repository.

## 02. Connect a Local Project

```bash
git init
git add .
git commit -m "Add project files"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```

If the remote repository already exists and contains work, clone it instead of initialising a second history.

## 03. Clone a Repository

```bash
git clone https://github.com/USERNAME/REPOSITORY.git
```

Cloning downloads the files and Git history and configures the original repository as the remote named `origin`.

## 04. Pull Request Workflow

1. Create a branch for a focused change.
2. Edit and test the files.
3. Commit the change.
4. Push the branch to GitHub.
5. Open a pull request.
6. Review the diff and address feedback.
7. Merge when the work is ready.

## 05. Useful Repository Features

- **README:** explain the purpose and use of a project.
- **Issues:** track questions, bugs and tasks.
- **Pull requests:** propose and review changes.
- **Releases:** mark useful versions of a project.
- **Settings:** control access, branches and repository options.

## Good Habits

- Keep the README clear and useful.
- Commit related changes together.
- Review changes before merging.
- Never commit secrets, passwords or access tokens.

---

[Back to GitHub](README.md) · [Portfolio Home](../README.md)
