class MVS_Altyn_Visor extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionLiftVisor);
	}
}

class MVS_Altyn_Visor_Lifted extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionLowerVisor);
	}
}


