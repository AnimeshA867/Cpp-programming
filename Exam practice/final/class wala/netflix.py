import turtle

# Set up the screen
screen = turtle.Screen()
screen.bgcolor("black")

# Create a turtle to draw the logo
logo_turtle = turtle.Turtle()
logo_turtle.speed(0)
logo_turtle.color("red")
logo_turtle.width(5)

# Draw the 'N'
logo_turtle.penup()
logo_turtle.goto(-100, 50)
logo_turtle.pendown()
logo_turtle.right(90)
logo_turtle.forward(100)
logo_turtle.left(135)
logo_turtle.forward(140)
logo_turtle.right(135)
logo_turtle.forward(100)

# Draw the underline
logo_turtle.penup()
logo_turtle.goto(-100, -50)
logo_turtle.pendown()
logo_turtle.forward(100)

# Hide the turtle
logo_turtle.hideturtle()

# Keep the window open
turtle.done()