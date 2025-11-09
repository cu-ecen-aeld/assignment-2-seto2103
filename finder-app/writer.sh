#!/bin/bash

writefile=$1
writestr=$2

# Check if either variable is empty
if [ -z "$writefile" ] || [ -z "$writestr" ]; then
    echo "ERROR: Not all arguments were provided"
    echo "Example: writer.sh /tmp/aesd/assignment1/sample.txt ios"
    exit 1
fi

# Create the directory path if it doesn't exist
dirpath=$(dirname "$writefile")
mkdir -p "$dirpath"

# Write content to file, overwriting any existing file
echo "$writestr" > "$writefile"
