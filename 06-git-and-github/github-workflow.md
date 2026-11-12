# Working with GitHub

GitHub adds collaboration and project-sharing features to Git repositories.

## Create a repository

1. Sign in to GitHub.
2. Select **New repository**.
3. Enter a repository name and short description.
4. Choose public or private visibility.
5. Create the repository.

## Connect a local project

If the project already exists on your computer:

```bash
git init
git add .
git commit -m "Add project files"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```

If you are starting from an existing remote repository, use `git clone URL` instead.

## Pull request workflow

1. Create a branch for a focused change.
2. Edit and test the files.
3. Commit the changes.
4. Push the branch to GitHub.
5. Open a pull request.
6. Review the changes and address feedback.
7. Merge when the work is ready.

## Good repository habits

- Write a useful README.
- Keep folders and filenames predictable.
- Commit related changes together.
- Never commit secrets or personal credentials.
- Use issues to record tasks and problems.
- Review changes before merging.
