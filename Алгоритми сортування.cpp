//Алгоритм методом вставки
	for (i = 1; i < SIZE; i++)
	{
		tmp = arr[i];

		for (j = i - 1; j >= 0 && arr[j] > tmp; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;
	}

// Алгоритм сортування бульбашкою (З меншого до більшого)
	for (int i = k - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) 
		{
			if (Array[j] > Array[j + 1]) 
			{
				int tmp = 0;
				tmp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = tmp;
			}
		}
	}