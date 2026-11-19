src_files=$(find src -type f)

pwd
echo "$src_files"

gcc main.c $src_files -Wall -Wextra -o main
