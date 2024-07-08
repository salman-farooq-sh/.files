local utils = require("mp.utils")

function split_path(full_path)
    return full_path:match("^(.-)([^/]-)%.([^/%.]-)$")
end

function playlist_search()
    local playlist = mp.get_property_native("playlist")
    local lines = ""
    local current = nil

    for i = 1, #playlist do
        local entry = playlist[i]

        local dir, basename, ext = split_path(entry.filename)
        lines = lines .. basename .. "\n"

        if entry.current then
            -- current = i
            current = basename
        end
    end

    local r = mp.command_native(
        {
            name = "subprocess",
            playback_only = true,
            capture_stdout = true,
            stdin_data = lines,
            args = {
                "fuzzel",
                "--dmenu",
                "--index",
                "--select",
                tostring(current),
            },
        }
    )
    if r.status == 0 then
        local selected_index = r.stdout:match("^(%d+)")
        mp.set_property("playlist-pos", selected_index)
    end
end

mp.add_key_binding("", "playlist_search", playlist_search)
