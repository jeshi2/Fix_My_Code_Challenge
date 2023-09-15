#!/usr/bin/python3
"""square module applied"""

class Square():
    
    width = 0
    height = 0

    
    def __init__(self, *args, **kwargs):
        """Square class"""
        for key, value in kwargs.items():
            setattr(self, key, value)

    def area_of_my_square(self):
        """ Area of the square """
        return self.width * self.width

    def PermiterOfMySquare(self):
        """Perimeter of square"""
        return (self.width * 2) + (self.height * 2)

    def __str__(self):
        """String representation of square"""
        return "{}/{}".format(self.width, self.height)

if __name__ == "__main__":
    """create square"""

    s = Square(width=12, height=9)
    print(s)
    print(s.area_of_my_square())
    print(s.PermiterOfMySquare())
