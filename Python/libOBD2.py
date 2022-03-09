#Python Wrapper for libOBD2.so

import sys, platform
import ctypes, ctypes.util
 
# Find the library and load it
libOBD2_path = ctypes.util.find_library("./libOBD2.so")
if not libOBD2_path:
      print("Unable to find the specified library.")
      sys.exit()
try:
     mylib = ctypes.CDLL(libOBD2_path)
except OSError:
     print("Unable to load the system C library")
     sys.exit()