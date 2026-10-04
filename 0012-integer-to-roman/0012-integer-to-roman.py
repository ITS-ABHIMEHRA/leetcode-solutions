class Solution:
    def intToRoman(self, num: int) -> str:
        map = {3000: 'MMM',50: 'L',2000: 'MM',40: 'XL',1000: 'M',30: 'XXX',900:  'CM',20:    'XX',800:  'DCCC',10: 'X',700:  'DCC',9: 'IX',600:  'DC',8: 'VIII',500:  'D',7: 'VII',400:  'CD',6: 'VI',300:  'CCC',5: 'V',200:  'CC',4: 'IV',100:  'C',3: 'III',90:   'XC',2: 'II',80:'LXXX',1: 'I',70:'LXX',0: '',60:'LX',
        }
        b= str(num)
        s=''
        n=len(b)
        for i in b:
            r = int(i) * 10**(n-1)
            s+=map[r]
            n-=1
        return s