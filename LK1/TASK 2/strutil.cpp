int strConteins(char* a, char* str) {
	int refund = -1;
	for (int i = 0; str[i] != '\0'; ++i) {
		if (a[0] == str[i]) {
			bool conteins = true;
			int j = 0;
			while (a[j] != '\0') {
				if (a[j] != str[i + j]) {
					conteins = false;
					break;
				}
				j++;
			}
			if (conteins) {
				refund = i;
			}
			break;
		}
	}
	return refund;
}
