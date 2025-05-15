class Car():
	def __init__(self,brand,color):
		self.brand = brand
		self.color = color

	def drive(self):
		print(f"The {self.color} {self.brand} is driving.")

# Creating objects (instances)

car1 = Car("Toyota", "Red")
car2 = Car("Hyundai", "Green")
car1.drive()  # Output: The Red Toyota is driving.
car2.drive()  # Output: The Green Hyundai is driving.