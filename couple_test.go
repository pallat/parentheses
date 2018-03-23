package parentheses

import (
	"testing"
)

const (
	open  = 123
	close = 125
)

func TestX(t *testing.T) {
	ss := map[string]bool{
		"xxxxxxxxxxx{}xxxxxxxxxxxxxxx":  true,
		"xxxxxxxxxxx{}xxxxxxx{}xxxxx":   true,
		"xxxxxxxxxxx{}xxxxxxx{x}xxxxx":  false,
		"xxxxxxxxxxx{x}xxxxxxxxxxxxxxx": false,
		"xxxxxxxxxxx}{xxxxxxxxxxxxxxx":  false,
		"{xxxxxxxxxxxxxxx":              false,
		"xxxxxxxxxxxxxxx}x":             false,
	}

	for k, v := range ss {
		if check(k) != v {
			t.Errorf("%v should be %v but got %v", k, v, check(k))
		}
	}

}
