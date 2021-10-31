class MVS_Helmet_Base: Mich2001Helmet {};
class MVS_Helmet_2_Base: Mich2001Helmet {};
class MVS_OpsCore_Base: Mich2001Helmet {};

class MVS_ArmoredHelmet_Base extends HelmetBase
{
	override int GetGlassesEffectID()
	{
		return PPERequesterBank.REQ_GLASSESAVIATOR;
	}
};

class MVS_Altyn_Helmet_Base extends HelmetBase {};

class MVS_Altyn_Visor extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionLiftVisor);
	}
};

class MVS_Altyn_Visor_Lifted extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionLowerVisor);
	}
};

class MVS_WarriorHelmet_Base extends Mich2001Helmet
{
	override int GetGlassesEffectID()
	{
		return PPERequesterBank.REQ_GLASSESAVIATOR;
	}
};