# Game of Fifteen Pseudocode

### init()
	
	tile = (d * d) - 1
	for i = 0; i < d; i ++
		for j = 0; j < d; j++
		board[i][j] tile--
		if d % 2 == 0
			board[d-1][d-2] == 2
			board[d-1][d-3] == 1


### draw()

	for int i = 0; i < d; i++
		for int i = 0; i < d; i++
			if board[i][j] > 0
				printf "%2i", board[i][j]
			if board[i][j] == 0
				printf "_"
		printf "\n"



### move(int tile)

	int a = 0
	int b = 0;
	for int i = 0; i < d; i++
		for int j = 0; j < d; j++
			if (tile == board[i][j])
				a = i
				b = j
	if a+1 < d && board[a+1][b] == 0
		board[a+1][b] = board[a][b]
		board[a][b] = 0
		return true
	else if a-1 >= 0 && board[a-1][b] == 0
		board[a-1][b] = board[a][b]
		board[a][b] = 0
		return true
	else if b+1 < d && board[a][b+1] == 0
		board[a][b+1] = board[a][b]
		board[a][b] = 0
		return true
	else if b-1 >= 0 && board[a][b-1] == 0
		board[a][b-] = board[a][b]
		board[a][b] = 0
		return true
	return false


### won()

	counter = 1
	for i = 0; i < d; i++
		for j = 0; j < d; j++
		if board[i][j] == counter
			counter++
	if counter = d * d and board[d-1][d-1] == 0
		return true

	return false
		