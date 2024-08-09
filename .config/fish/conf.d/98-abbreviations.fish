# apt
abbr -a saa 'sudo apt autoremove'
abbr -a sadg 'sudo apt update && sudo apt upgrade'
abbr -a sad 'sudo apt update'
abbr -a sag 'sudo apt upgrade'
abbr -a sai 'sudo apt install'
abbr -a sap 'sudo apt purge'
abbr -a sar 'sudo apt remove'
abbr -a sa 'sudo apt'

# cd
abbr -a .c 'cd $HOME/.config/'
abbr -a .lb 'cd $HOME/.local/bin/'
abbr -a ap 'cd $HOME/Archives/parts/'
abbr -a t 'cd /tmp'

# editor
abbr -a h hx
abbr -a n nvim
abbr -a ew "$EDITOR (which"
abbr -a ec "$EDITOR ~/.config/"
if test $EDITOR = hx
    abbr -a se 'sudo hx -c ~/.config/helix/config.toml'
else if test $EDITOR = nvim
    abbr -a se 'sudo nvim'
else
    abbr -a se sudoedit
end

# git
abbr -a g git
abbr -a gst 'git status'
abbr -a ga 'git add'
abbr -a ga. 'git add .'
abbr -a gb 'git branch'
abbr -a gch 'git checkout'
abbr -a gco 'git commit'
abbr -a gcom 'git commit -m'
abbr -a gcom. 'git commit -m .'
abbr -a gd 'git diff'
abbr -a gds 'git diff && for i in (seq 50)
        echo -n =
    end
    echo && git status'
abbr -a ghe 'git help'
abbr -a gl 'git log'
abbr -a gm 'git merge'
abbr -a gpl 'git pull'
abbr -a gps 'git push'

# grep
abbr -a grlte 'grep --recursive --line-number --text --exclude-dir='
abbr -a grte 'grep --recursive --text --exclude-dir='

# nala
abbr -a nar 'sudo nala autoremove'
abbr -a na 'sudo nala'
abbr -a ncl 'sudo nala clean'
abbr -a nf 'sudo nala fetch'
abbr -a nh 'nala history'
abbr -a ni 'sudo nala install'
abbr -a nli 'nala list'
abbr -a np 'sudo nala purge'
abbr -a nr 'sudo nala remove'
abbr -a nse 'nala search'
abbr -a nsh 'nala show'
abbr -a nud 'sudo nala update'
abbr -a nug 'sudo nala upgrade'

# protonvpn
abbr -a pc 'sudo protonvpn c --cc NL'
abbr -a pcu 'sudo protonvpn c --cc US'
abbr -a pd 'sudo protonvpn d'

# python
abbr -a p python3
abbr -a i ipython3
abbr -a ppjson 'python3 -m json.tool'
abbr -a p3i 'pip3 install'
abbr -a pei 'pipenv install'
abbr -a pes 'pipenv shell'
abbr -a ss 'scrapy shell'
abbr -a pmcs 'python manage.py createsuperuser'
abbr -a pmmm 'python manage.py makemigrations'
abbr -a pmm 'python manage.py migrate'
abbr -a pm 'python manage.py'
abbr -a pmr 'python manage.py runserver'
abbr -a pmsa 'python manage.py startapp'
abbr -a pms 'DJANGO_SETTINGS_MODULE=(python3 manage.py shell -i python -c \'import os; print(os.environ.get("DJANGO_SETTINGS_MODULE")\') ipython3 -c \'import django; django.setup()\' -i'

# systemd
abbr -a sr 'systemctl restart'
abbr -a sur 'systemctl --user restart'
abbr -a rbios 'systemctl reboot --firmware-setup'
abbr -a sdi 'systemd-inhibit --what=sleep:handle-lid-switch'

# udisksctl
abbr -a udm 'udisksctl mount --block-device /dev/sd'
abbr -a udpo 'udisksctl power-off --block-device /dev/sd'
abbr -a uds 'udisksctl status'
abbr -a udu 'udisksctl unmount --force --block-device /dev/sd'

# utility
abbr -a w which
abbr -a xo xdg-open
abbr -a cpl 'history | head -n 1 | wl-copy'
abbr -a ch 'sudo chth'
abbr -a st speedtest
abbr -a m moar
abbr -a f fastfetch
abbr -a ya "yadm add"
abbr -a fc fish_config
abbr -a keycodes "$EDITOR /usr/include/linux/input-event-codes.h"
abbr -a lsext 'find . -type f | perl -ne \'print $1 if m/\\.([^.\\/]+)$/\' | sort -u'
abbr -a rw 'nmcli radio wifi off; nmcli radio wifi on'
abbr -a ppp 'powerprofilesctl launch --profile performance'
abbr -a s "stress -c (nproc) --timeout 30"
abbr -a te 'trash-empty -f'
abbr -a y 'yt-dlp --retries=infinite --no-playlist -f \'bestvideo[height<=2400]+bestaudio\' -o - (fcl) | mpv --save-position-on-quit=no -'

# watch
abbr -a wcpu 'watch -n 0.7 --color "cat /proc/cpuinfo | grep MHz --color=always"'
abbr -a wfan 'watch -n 0.5 cat /proc/acpi/ibm/fan'
abbr -a wgpu 'watch -n 0.2 nvidia-smi'
abbr -a igt 'sudo intel_gpu_top -s 700'
abbr -a a amdgpu_top

# yay
abbr -a ys 'yay -S --needed'
abbr -a yr 'yay -Rnsu'
abbr -a yq 'yay -Qi'
abbr -a ysi 'yay -Si'
