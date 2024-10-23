# This bash script uses git to stage, commit, and push changes to a remote GitHub repository on branch main.
# It assumes that the remote repository is already set up and that the local repository is already cloned.

# Stage all changes
git stage .

# Commit changes with a message
git commit -m "Update"

# Push changes to remote repository on branch main
git push origin main