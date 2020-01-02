//clear 1bit
#define clear_bit(data, loc)		((data) &= ~(0x1 << (loc)))
//clear consecutive bits
#define clear_bits(data, area, loc)	((data) &= ~((area) << (loc)))

//set 1bit
#define set_bit(data, loc)			((data) |= (0x1 << (loc)))
//set consecutive bits
#define set_bits(data, area, loc)	((data) |= ((area) << (loc)))

//invert 1bit
#define invert_bit(data, loc)		((data) ^= (0x1 << (loc)))
//invert consecutive bits
#define invert_bits(data, area, loc)	((data) ^= ((area) << (loc)))

//check bit
#define check_bit(data, loc)		((data) & (0x1 << (loc)))

//extract bits
#define extract_bits(data, area, loc) (((data) >> (loc)) & (area))
