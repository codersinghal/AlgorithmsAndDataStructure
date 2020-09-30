vector<bool> isprime;
vector<int> primes;
void sieve(int n) {
	isprime.resize(n + 1);
	for (int i = 0; i <= n; i++) {
		isprime[i] = true;
	}
	isprime[1] = false; isprime[2] = true;
	for (int i = 2; i*i <= n; i++) {
		if (isprime[i]) {
			for (int j = i*i;  j <= n; j+=i) {
					isprime[j] = false;
			}
		}
	}
	for (int i = 2; i < n; i++) {
		if (isprime[i]) {
			primes.push_back(i);
		}
	}
	return;
}
