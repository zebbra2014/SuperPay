#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/superpay.ico

convert ../../src/qt/res/icons/superpay-16.png ../../src/qt/res/icons/superpay-32.png ../../src/qt/res/icons/superpay-48.png ${ICON_DST}
