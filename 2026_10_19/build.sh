CPP_FILES="main.cpp menu_items.cpp menu_functions.cpp"
APP="example"

if [ -f $APP ]; then 
    rm $APP
fi

clang++ -std=c++14 $CPP_FILES -o $APP

if [ -f $APP ]; then
    ./$APP
fi
