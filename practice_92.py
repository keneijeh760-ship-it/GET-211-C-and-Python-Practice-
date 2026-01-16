from abc import ABC, abstractmethod


@abstractmethod

class Shape:
    def draw(self):
        pass

class Square(Shape):
    def draw(self):
        return "Draw a box"


class Circle(Shape):
    def draw(self):
        return "Draw a circle"

def render_shape(shape):
    print(shape.draw())
