﻿// -------------------------------------------------------------------------------
// THIS FILE IS ORIGINALLY GENERATED BY THE DESIGNER.
// YOU ARE ONLY ALLOWED TO MODIFY CODE BETWEEN '///<<< BEGIN' AND '///<<< END'.
// PLEASE MODIFY AND REGENERETE IT IN THE DESIGNER FOR CLASS/MEMBERS/METHODS, ETC.
// -------------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;

///<<< BEGIN WRITING YOUR CODE FILE_INIT

///<<< END WRITING YOUR CODE

public class FirstAgent : behaviac.Agent
///<<< BEGIN WRITING YOUR CODE FirstAgent
///<<< END WRITING YOUR CODE
{
	private FirstEnum p1 = FirstEnum.e1;
	public void _set_p1(FirstEnum value)
	{
		p1 = value;
	}
	public FirstEnum _get_p1()
	{
		return p1;
	}

	public void SayHello()
	{
///<<< BEGIN WRITING YOUR CODE SayHello
        Console.WriteLine();
        Console.WriteLine("Hello Behaviac!");
        Console.WriteLine();
///<<< END WRITING YOUR CODE
	}

///<<< BEGIN WRITING YOUR CODE CLASS_PART

///<<< END WRITING YOUR CODE

}

///<<< BEGIN WRITING YOUR CODE FILE_UNINIT

///<<< END WRITING YOUR CODE

