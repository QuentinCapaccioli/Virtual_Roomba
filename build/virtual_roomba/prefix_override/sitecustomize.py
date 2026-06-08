import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/quentin/Bureau/roomba_virtuel/install/virtual_roomba'
