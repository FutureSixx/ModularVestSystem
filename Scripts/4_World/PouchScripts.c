class MVS_Pouch_Base extends Container_Base
{
	override bool IsContainer()
	{
		return true;
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		if ( parent.IsKindOf("MVS_Pouch_Base") || (parent.IsKindOf("PlateCarrierPouches"))
		{
			return false;
		}
	
		return true;
	}
	
    override bool CanPutAsAttachment( EntityAI parent )
    {
        if ( !IsRuined() )
            return true;
        return false;
    }
};

class Modular_Pouch_Base: MVS_Pouch_Base {};
class MVS_Magazine_Pouch_OD: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_ERDL: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_Tan: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_Black: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_Snow: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_Multicam: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_Multicam_Black: Modular_Pouch_Base {};
class MVS_Magazine_Pouch_Multicam_Tropic: Modular_Pouch_Base {};

class Modular_Pouch_Base_Admin: MVS_Pouch_Base{};
class MVS_Admin_Pouch_OD: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_ERDL: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_Tan: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_Black: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_Snow: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_Multicam: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_Multicam_Black: Modular_Pouch_Base_Admin {};
class MVS_Admin_Pouch_Multicam_Tropic: Modular_Pouch_Base_Admin {};

class Modular_Pouch_Base_Heavy: MVS_Pouch_Base{};
class MVS_Heavy_Pouch_OD: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_ERDL: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_Tan: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_Black: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_Snow: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_Multicam: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_Multicam_Tropic: Modular_Pouch_Base_Heavy {};
class MVS_Heavy_Pouch_Multicam_Black: Modular_Pouch_Base_Heavy {};

class Modular_Pouch_Base_Utility: MVS_Pouch_Base {};
class MVS_Utility_Pouch_OD: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_ERDL: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_Tan: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_Black: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_Snow: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_Multicam: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_Multicam_Black: Modular_Pouch_Base_Utility {};
class MVS_Utility_Pouch_Multicam_Tropic: Modular_Pouch_Base_Utility {};

class Modular_Pouch_Base_Medical: MVS_Pouch_Base {};
class MVS_Medical_Pouch_OD: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_ERDL: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_Tan: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_Black: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_Snow: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_Multicam: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_Multicam_Black: Modular_Pouch_Base_Medical {};
class MVS_Medical_Pouch_Multicam_Tropic: Modular_Pouch_Base_Medical {};

class Modular_Pouch_Base_Taco extends MVS_Pouch_Base
{
    override bool CanDisplayAttachmentSlot( string slot_name )
    {    
        
		if (!super.CanDisplayAttachmentSlot(slot_name))
            return false;

		if ( slot_name == "MVS_Pliers" )
        {
            if ( this.FindAttachmentBySlotName("MVS_Pliers") == NULL || this.FindAttachmentBySlotName("MVS_Pliers") != NULL) 
            {
				return false;
            }
            return true;        
        }
		if ( slot_name == "MVS_Screwdriver" )
        {
            if ( this.FindAttachmentBySlotName("MVS_Screwdriver") == NULL || this.FindAttachmentBySlotName("MVS_Screwdriver") != NULL) 
            {
				return false;
            }
            return true;        
        }	
        return true;
    }
};

class MVS_Taco_Pouch_OD extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_ERDL extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_Tan extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_Black extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_Snow extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_Multicam extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_Multicam_Tropic extends Modular_Pouch_Base_Taco{};
class MVS_Taco_Pouch_Multicam_Black extends Modular_Pouch_Base_Taco{};

class MVS_Canteen_Base extends Bottle_Base
{
	void MVS_Canteen_Base()
	{

	}
	
	void ~MVS_Canteen_Base()
	{
		
	}
	
	override bool IsContainer()
	{
		return true;
	}
	
	override string GetPouringSoundset()
	{
		return "emptyVessle_Canteen_SoundSet";
	}
	
		override string GetEmptyingLoopSoundsetHard()
	{
		return "pour_HardGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetSoft()
	{
		return "pour_SoftGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetWater()
	{
		return "pour_Water_Canteen_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetHard()
	{
		return "pour_End_HardGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetSoft()
	{
		return "pour_End_SoftGround_Canteen_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetWater()
	{
		return "pour_End_Water_Canteen_SoundSet";
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo(parent) ) {return false;}	
		if ( !(parent.IsKindOf("MVS_Canteen_Base"))/* && !(parent.IsKindOf("Container_Base"))*/)
		{
			return true;
		}
		
		return false;
	}
	
	override bool IsOpen()
	{
		return true;
	}

	override void EEOnCECreate()
	{
		super.EEOnCECreate();

		int rand = Math.RandomInt(0, 10);
		if (rand > 5)
		{
			InsertAgent(eAgents.CHOLERA, 1);
		}
	}
};

class MVS_Canteen_OD extends MVS_Canteen_Base{};
class MVS_Canteen_ERDL extends MVS_Canteen_Base{};
class MVS_Canteen_Tan extends MVS_Canteen_Base{};
class MVS_Canteen_Black extends MVS_Canteen_Base{};
class MVS_Canteen_Multicam extends MVS_Canteen_Base{};
class MVS_Canteen_Multicam_Tropic extends MVS_Canteen_Base{};
class MVS_Canteen_Multicam_Black extends MVS_Canteen_Base{};
