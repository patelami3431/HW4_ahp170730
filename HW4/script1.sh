#!/bin/bash
`mkdir dir1`
`touch ./dir1/file10`
`mkdir dir2`
`touch ./dir2/file20`
`touch file1`
`ln -s ./dir2/file20 link1`
echo "Done!"

