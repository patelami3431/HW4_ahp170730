#!/bin/bash
echo "The current files and folders in the directory are:"
echo `ls`
echo "Invoking script3.sh.."
echo `cat $HOME/HW4_ahp170730/script3.sh`
`chmod +x $HOME/HW4_ahp170730/script3.sh`
echo `$HOME/HW4_ahp170730/script3.sh`
echo "The files and folders in the current directory are:"
echo `ls`

