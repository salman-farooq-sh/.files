function fish_prompt --description 'Informative prompt'
    #Save the return status of the previous command
    set last_pipestatus $pipestatus

    set pipestatus_string (__fish_print_pipestatus "[" "]" "|" (set_color $fish_color_status) (set_color --bold $fish_color_status) $last_pipestatus)

    # printf '%s%s%s%s%s%s\nλ ' (set_color $fish_color_cwd) '['(string replace --regex "^$HOME" '~' $PWD)']' ' '$pipestatus_string (set_color cyan) ' '(pretty-cmd-duration $CMD_DURATION) (set_color normal)

    printf '%s%s%s%s> ' $pipestatus_string' ' (set_color cyan) (pretty-cmd-duration $CMD_DURATION)' ' (set_color normal)
end
