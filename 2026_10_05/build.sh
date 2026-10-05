MAIN=after_refactoring/after_refactoring_3.cpp
APP=example

if [ ! -f $APP ]; then rm $APP
fi

g++ $MAIN -o $APP

./$APP