// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "f22GameMode.h"
#include "f22Pawn.h"

Af22GameMode::Af22GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = Af22Pawn::StaticClass();
}
