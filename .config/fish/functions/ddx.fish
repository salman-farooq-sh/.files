function ddx --description 'umount sdx* and dd the given file to sdx'
	sudo umount /dev/sd$argv[1]*
	sudo dd status=progress if=$argv[2] of=/dev/sd$argv[1]
end

# improve this to instead first show a list of block devices
# and also possibly a file explorer for the iso using dialog
