MAIN=after_refactoring_5.cpp
APP=example

if [ ! -f $APP ]; then rm $APP
fi

g++ $MAIN -o $APP

./$APP