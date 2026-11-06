# Git command cheat sheet

| Task | Command |
|---|---|
| Initialise repository | `git init` |
| Inspect working tree | `git status` |
| Stage one file | `git add path/to/file` |
| Stage all changes | `git add .` |
| Commit | `git commit -m "message"` |
| Compact history | `git log --oneline --graph --decorate` |
| Inspect edits | `git diff` |
| Inspect staged edits | `git diff --staged` |
| Create branch | `git switch -c branch-name` |
| Switch branch | `git switch main` |
| List branches | `git branch` |
| Add remote | `git remote add origin URL` |
| View remotes | `git remote -v` |
| First push | `git push -u origin main` |
| Later push | `git push` |
| Pull updates | `git pull` |

Be careful with destructive commands such as `git reset --hard` and `git clean -fd`; they can remove local work.
