// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FlyVR.h"
#include "FlyVRGameMode.h"
#include "FlyVRPawn.h"

AFlyVRGameMode::AFlyVRGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyVRPawn::StaticClass();
}
