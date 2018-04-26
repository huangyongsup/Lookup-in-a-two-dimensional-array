class Solution
{
public:
	void replaceSpace(char *str, int length)
	{
		if (*str == NULL || length < 0)
		{
			return;
		}

		int oldIndex = 0;
		int numOfBlank = 0;
		while (str[oldIndex] != '\0')
		{
			if (str[oldIndex] == ' ')
			{
				++numOfBlank;
			}
			++oldIndex;
		}

		int newIndex = oldIndex + 2 * numOfBlank;
		if (newIndex > oldIndex)
		{
			while (oldIndex >= 0)
			{
				while (str[oldIndex] == ' ')
				{
					str[newIndex--] = '0';
					str[newIndex--] = '2';
					str[newIndex--] = '%';
					--oldIndex;
				}
				str[newIndex--] = std::move(str[oldIndex--]);
			}
		}
	}
};
