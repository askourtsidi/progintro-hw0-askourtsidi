# @(#)cshrc 1.11 89/11/29 SMI
umask 022
set path=(/home/newapps/SUNWspro/bin /home/appl/gcc/bin /home/appl/gdb/bin /usr/ccs/bin /usr/bin/X11 /bin /usr/bin /home/appl/mosaic /usr/ucb /etc /usr/etc /usr/local/bin /home/appl/emacs/bin /home/appl/ghostscript/bin /home/appl/gzip/bin .)
if ( $?prompt ) then
	setenv LC_CTYPE iso_8859_1
	stty cs8 -istrip -parenb
	set history=32
endif
alias cd 'cd \!*; set prompt = `hostname`\:$cwd\>'
alias ls 'ls -lF'
alias rm 'rm -i'
alias lo 'logout'
alias mail '/usr/ucb/mail'
set prompt = `hostname`\:$cwd\>
set filec
limit coredumpsize 0

set path=(~/.local/bin $path)

setenv SHELL /bin/bash # pretend we use bash to force vscode to use bash
