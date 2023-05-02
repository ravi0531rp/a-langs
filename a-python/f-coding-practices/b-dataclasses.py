from dataclasses import dataclass, field

@dataclass(order=True) 
class Investor:
    sort_index : float = field(init=False, repr=False)
    name : str
    age : int
    cash : float = field(repr=True) 

    def __post_init__(self):
        self.sort_index = self.cash

i1 = Investor("John", 30, 100)
i2 = Investor("Mike", 29, 50)
i3 = Investor("John", 30, 60) 


print(i1) 
print(i1 > i2)
