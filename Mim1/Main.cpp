#include <iostream>
#include <Windows.h>





int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); //		1251
	srand(time(NULL));
	int choice = 0;
	int MainSum = 0;
	int DiscountMainSum = 0;


	int Hawthorn = 0;



	int Tinctures = 0;
	int choiceTinctures = 0;
	int BanTinctures = 0;


	int Frukt;
	int FruktSum = 0;
	int choiceFrukt = 0;
	int BanFrukt = 0;

	int Veggie = 0;
	int VeggieSum = 0;
	int choiceVeggie;
	int OnionL = 0;
	int MainOnionL = 0;

	int Tea;
	int choiceTea;
	int TeaSum = 0;
	int TeaParsleyL = 0;
	int DiscountTeaParsleyL = 0;


	/*
	std::cout << "Магазин соков Севы\n";
	std::cout << "1) Фруктовый\n";
	std::cout << "2) Овощной\n";
	std::cout << "3) Чай\n";
	std::cout << "4) Выйти в окно\n";
	

	int TeaParsley;
	int TeaGarlic;
	
	
	*/



	while(true)
	{
		system("cls");
		std::cout << "Магазин соков Севы\n";
		std::cout << "1) Фруктовый\n";
		std::cout << "2) Овощной\n";
		std::cout << "3) Чай\n";
		std::cout << "4) Настойки\n";
		std::cout << "5) Покупай\n";
		std::cout << "6) Выйти в окно\n";



		std::cin >> choice;
		system("cls");
			if (choice == 1)
			{

			
					
						while (true)
						{
							system("cls");
							std::cout << "1) Яблочный сок 40р\n";
							std::cout << "2) Апельсиновый сок 60р\n";
							std::cout << "3) Абрикосовый сок 80р\n";
							std::cout << "4) Грушевый сок 100р\n";
							std::cout << "5) Назад\n";

							std::cin >> choiceFrukt;
					
							if (choiceFrukt == 1)
							{
								MainSum = MainSum + 40;

								

								BanFrukt = BanFrukt + 1;

								if (BanTinctures > 0)
								{
									MainSum = MainSum - BanTinctures;
								}

							}
							else if (choiceFrukt == 2)
							{
								MainSum = MainSum +60;
								
								if (BanTinctures > 0)
								{
									MainSum = MainSum - BanTinctures;
								}

								BanFrukt = BanFrukt + 1;
							}
							else if (choiceFrukt == 3)
							{
								MainSum = MainSum +80;

								if (BanTinctures > 0)
								{
									MainSum = MainSum - BanTinctures;
								}

								BanFrukt = BanFrukt + 1;
							}
							else if (choiceFrukt == 4)
							{
								MainSum = MainSum +100;

								if (BanTinctures > 0)
								{
									MainSum = MainSum - BanTinctures;
								}

								BanFrukt = BanFrukt + 1;

							}
							else if (choiceFrukt == 5)
							{
					
							break;
							}				
							
			}
			}
			else if(choice == 2)
			{
				while (true)
				{

						system("cls");
						std::cout << "1) Томатный сок 40р\n";
						std::cout << "2) Луковый сок 60р\n";
						std::cout << "3) Огуречный сок 80р\n";
						std::cout << "4) Назад\n";

						std::cin >> choiceVeggie;

						if (choiceVeggie == 1)
						{
							MainSum = MainSum +40;

						}
						else if (choiceVeggie == 2)
						{
							MainSum = MainSum + 60;

							OnionL = OnionL + 1;

							if (OnionL == 4)
							{

								MainSum = MainSum - 60;

								MainOnionL = MainOnionL + 1;

								OnionL = OnionL * 0;
							}
						}
						else if (choiceVeggie == 3)
						{
							MainSum = MainSum +80;

						}
						else if (choiceVeggie == 4)
						{
							break;
						}


				}
			}
			else if (choice == 3)
			{
				while (true)
				{

					system("cls");
					std::cout << "1) Чай Чесночный 10р\n";
					std::cout << "2) Чай Пертрушечный сок 100р\n";
					std::cout << "3) Назад\n";

					std::cin >> choiceTea;

					if (choiceTea == 1)
					{
						MainSum = MainSum +10;

					}
					else if (choiceTea == 2)
					{
						MainSum = MainSum +100;

						TeaParsleyL = TeaParsleyL + 1;
						if (TeaParsleyL == 3)
						{
							MainSum = MainSum - 300;

							MainSum = MainSum + (300 * (5 / 100));
							
							DiscountTeaParsleyL = DiscountTeaParsleyL + 1;
						}

					}
					else if (choiceTea == 3)
					{
						break;
					}


				}
			}
			else if (choice == 4) // Настойки
			
					while (true)
					{ 
						if (BanFrukt == 0)
						{
							system("cls");
							std::cout << "1) Бояршник 10р\n";
							std::cout << "2) Назад\n";
							std::cin >> choiceTinctures;

							if (choiceTinctures == 1)
							{
								MainSum = MainSum + 10;

								BanTinctures = BanTinctures + 10;

							}
							else if (choiceTinctures == 2)
							{
								break;
							}

						

						}
				
						else if (BanFrukt > 0)
						{
							std::cout << "Бан\n";
							Sleep(1500);
							break;
						}

					
					}



			
			else if (choice == 5)
			{
				
				
				if (MainSum < 1000)
				{
					std::cout << MainSum;
					Sleep(1500);
					
				}
				
				
				else if (MainSum >= 1000)
				{
				DiscountMainSum = MainSum * (13 / 100);

				std::cout << DiscountMainSum << "\n";
				Sleep(1500);
										
				}

					else if (MainOnionL > 0)
					{

						std::cout << "Сумма чека" << MainSum << "\n";
						std::cout << "Кол-во сока в подарок: " << MainOnionL;
						Sleep(1500);

						if (MainSum >= 1000)
						{
							DiscountMainSum = MainSum * (13 / 100);

							std::cout << DiscountMainSum << "\n";
							Sleep(1500);

						}



				else
				{
					std::cout << MainSum;
					Sleep(1500);
				}


			}



			else if (choice == 6)
			{
				std::cout << "Поздравляю вы вышли в окно\n";
				Sleep(1500);


			}

	}

	

	}




		//SetArr(arr, size);
		//PrintArr(arr, size);



	return 0;
}