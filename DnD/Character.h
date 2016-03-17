#pragma once
class Character
{
public:
	Character();
	~Character();

	/*
	Edits the character's stat
	1: Success
	2: Failure
	*/
	bool edit();

private:

	// The total amount of gold that the character has
	float _gold;

	// Character's stat
	int[] _stat;

};