all: bitmaps pngs cp

bitmaps: player.h hurdle.h banner.h speaker.h coin.h
pngs: player.png hurdle.png banner.png speaker.png coin.png

%.png: %.ase
	/Applications/Aseprite.app/Contents/MacOS/aseprite -b --sheet-type vertical --format json-array --data $(basename $@).json --sheet $@ $<

%.h: %.png
	mksprite -in $< -out $@ -name $(basename $@) -json $(basename $@).json

cp:
	cp *.h ../src/bitmaps

clean:
	rm -f *.png *.h *.json

.PHONY: all clean
.DEFAULT: all
