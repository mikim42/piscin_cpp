/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:39:56 by mikim             #+#    #+#             */
/*   Updated: 2018/01/15 16:58:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "-----------------" << std::endl;
	std::cout << "beginning of test" << std::endl;
	std::cout << "-----------------" << std::endl << std::endl;
	{
		std::cout << "----------------" << std::endl;
		std::cout << "Constructor test" << std::endl;
		std::cout << "----------------" << std::endl << std::endl;

		std::cout << ">>creating t1(test1, 0)" << std::endl;
		try
		{
			Bureaucrat	t1("test1", 0);
			std::cout << t1 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout <<e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;


		std::cout << ">>creating t2(test2, 1)" << std::endl;
		try
		{
			Bureaucrat	t2("test2", 1);
			std::cout << t2 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout <<e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;


		std::cout << ">>creating t3(test3, 75)" << std::endl;
		try
		{
			Bureaucrat	t3("test3", 75);
			std::cout << t3 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout <<e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;


		std::cout << ">>creating t4(test1, 150)" << std::endl;
		try
		{
			Bureaucrat	t4("test4", 150);
			std::cout << t4 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout <<e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;


		std::cout << ">>creating t5(test1, 151)" << std::endl;
		try
		{
			Bureaucrat	t5("test5", 151);
			std::cout << t5 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout <<e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;
	}
	{
		std::cout << "------------" << std::endl;
		std::cout << "gradeUp test" << std::endl;
		std::cout << "------------" << std::endl << std::endl;

		std::cout << ">>creating t1(test1, 3)" << std::endl;
		Bureaucrat	t1("test1", 3);
		std::cout << t1 << std::endl;
		try
		{
			std::cout << ">>increasing grade" << std::endl;
			t1.gradeUp();
			std::cout << t1 << std::endl;

			std::cout << ">>increasing grade" << std::endl;
			t1.gradeUp();
			std::cout << t1 << std::endl;

			std::cout << ">>increasing grade" << std::endl;
			t1.gradeUp();
			std::cout << t1 << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;

		std::cout << "--------------" << std::endl;
		std::cout << "gradeDown test" << std::endl;
		std::cout << "--------------" << std::endl << std::endl;

		std::cout << ">>creating t2(test2, 148)" << std::endl;
		Bureaucrat	t2("test2", 148);
		std::cout << t2 << std::endl;
		std::cout << ">>Done\n" << std::endl;

		try
		{
			std::cout << ">>decreasing grade" << std::endl;
			t2.gradeDown();
			std::cout << t2 << std::endl;
			std::cout << ">>Done\n" << std::endl;

			std::cout << ">>decreasing grade" << std::endl;
			t2.gradeDown();
			std::cout << t2 << std::endl;
			std::cout << ">>Done\n" << std::endl;

			std::cout << ">>decreasing grade" << std::endl;
			t2.gradeDown();
			std::cout << t2 << std::endl;
			std::cout << ">>Done\n" << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Unexpected Error occurred" << std::endl;
			std::cout << e.what() << std::endl;
		}
		std::cout << ">>Done\n" << std::endl;
	}
	std::cout << "-----------" << std::endl;
	std::cout << "end of test" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
}
