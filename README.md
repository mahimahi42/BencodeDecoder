BencodeDecoder
==============

Decoder written in C for bencode. This project will open a file with bencode encoded information,
parse the file, and write to a new file the decoded information. 

Future Projects
===============

I intend to use the final product of this work in a MacRuby application for OS X that will allow
users to browse Wikimedia sites, save pages both as bookmarks and locally, and even download
entire Wikimedia sites locally to disk, using either direct HTTP(S?) download or a custom
Bittorrent client.

- [ ] Parser header
- [ ] Parse bencode strings
- [ ] Parse bencode integers
- [ ] Parse bencode lists
- [ ] Parse bencode dictionaries
- [ ] Successfully parse Bittorrent file
