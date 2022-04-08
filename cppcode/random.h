int myRandom()
{
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		cout << rand() % (MAX - MIN) + MIN << endl;
	}
	system("pause");
	return 0;
}
