class ArmorRack_Kit : ItemBase
{
	void ArmorRack_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
    	{
        	super.OnPlacementComplete(player, position, orientation);
        	if (GetGame().IsServer())
        	{
            		EntityAI ArmorRack_Kit1 = EntityAI.Cast(GetGame().CreateObjectEx("Armor_Rack", position, ECE_PLACE_ON_SURFACE));
            		ArmorRack_Kit1.SetPosition(position);
            		ArmorRack_Kit1.SetOrientation(orientation);
        	}

        	SetIsDeploySound(true);
    	}
	
	override bool IsBasebuildingKit()
	{
		return true;
	}

	override bool IsDeployable()
	{
		return true;
	}

	override string GetPlaceSoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};

class ArmorRack_Holo : ItemBase
{	
	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}
};

class Armor_Rack : ItemBase
{	
	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}
};
