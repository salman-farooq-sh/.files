function fish_prompt --description 'Informative prompt'
    #Save the return status of the previous command
    set -l last_pipestatus $pipestatus

    switch "$USER"
        case root toor
            printf '%s@%s %s%s%s# ' $USER (prompt_hostname) (set -q fish_color_cwd_root
                                                             and set_color $fish_color_cwd_root
                                                             or set_color $fish_color_cwd) \
                (prompt_pwd) (set_color normal)
        case '*'
            set -l pipestatus_string (__fish_print_pipestatus "[" "]" "|" (set_color $fish_color_status) \
                                      (set_color --bold $fish_color_status) $last_pipestatus)

            printf '%s%s%s%s%s%s\nλ ' \
                (set_color $fish_color_cwd) '['(string replace --regex "^$HOME" '~' $PWD)']' \
                ' '$pipestatus_string \
                (set_color cyan) ' '(pretty-cmd-duration $CMD_DURATION) \
                (set_color normal)
    end
end
