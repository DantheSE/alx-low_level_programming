#!/bin/bash
git add .
echo your commit message
read $commit
git commit -m "$commit"
git push
