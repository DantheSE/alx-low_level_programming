#!/bin/bash


git add .
echo write your commit message
read commitmessage
git commit -m "$commitmessage"
git push
