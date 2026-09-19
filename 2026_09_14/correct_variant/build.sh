CPP_FILES="main.cpp sortings.cpp io.cpp"
APP="example"

if [ -f $APP ]; then 
    rm $APP
fi

clang++ -std=c++14 $CPP_FILES -o $APP

if [ -f $APP ]; then
    ./$APP
fi
