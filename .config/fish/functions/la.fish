#
# These are very common and useful
#
function la --wraps ls --description "List contents of directory, including hidden files using human-readable sizes and long format"
    ls -lAhFgG --group-directories-first $argv
end
