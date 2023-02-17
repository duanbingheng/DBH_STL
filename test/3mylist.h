template <typename T>
class List
{
    void insert_front(T value);
    void insert_end(T value);
    void display(std::ostream &os = std::cout) const;

private:
    ListItem<T> *_end;
    ListItem<T> *_font;
    long _size;
};
template <typename T>
class ListItem
{
};