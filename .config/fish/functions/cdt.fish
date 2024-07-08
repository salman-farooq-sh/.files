function cdt --description "cd with lf tui"
    set -U LF_CURRENT_PWD $PWD
    lf $PWD
    cd $LF_CURRENT_PWD
end
