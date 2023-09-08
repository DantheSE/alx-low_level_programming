#!/bin/bash
git add .
write input your commit message
read "$commit"
git commit -m "$commit"
git push
