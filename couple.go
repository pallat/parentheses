package parentheses

func check(s string) bool {
	pp := []int{}

	for k, v := range s {
		if v == open {
			pp = append(pp, k)
			continue
		}
		if v == close {
			if len(pp) == 0 {
				return false
			}
			if (k - pp[0]) != 1 {
				return false
			}

			pp = pp[:len(pp)-1]
		}
	}

	if len(pp) != 0 {
		return false
	}
	return true
}
