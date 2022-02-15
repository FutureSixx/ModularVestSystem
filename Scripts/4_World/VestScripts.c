class ModularVestSystem_Base extends Clothing
{ 

	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo( parent ) )
		{
			return false;
		}
		
		if(!IsEmpty())
		{
			return false;
		}
		
		return IsEmpty();
	}

    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
        if  ( attachment.IsKindOf("PlateCarrierPouches") )
        {            
            if ( FindAttachmentBySlotName("modular_pouch_2") != NULL || FindAttachmentBySlotName("modular_pouch_12") != NULL)
            {
                return false;
            }
        }   
        if  ( attachment.IsKindOf("Modular_Pouch_Base") )
        {            
            if ( FindAttachmentBySlotName("VestPouch") != NULL  || FindAttachmentBySlotName("modular_pouch_12") != NULL)
            {
                return false;
            }
        }	
        if  ( attachment.IsKindOf("Modular_Pouch_Base_Taco") )
        {            
            if ( FindAttachmentBySlotName("VestPouch") != NULL  || FindAttachmentBySlotName("modular_pouch_2") != NULL)
            {
                return false;
            }
        }		
        return super.CanReceiveAttachment(attachment, slotId);
    }
};
class MVS_Combat_Vest_OD: ModularVestSystem_Base {};
class MVS_Combat_Vest_ERDL: ModularVestSystem_Base {};
class MVS_Combat_Vest_Tan: ModularVestSystem_Base {};
class MVS_Combat_Vest_Black: ModularVestSystem_Base {};
class MVS_Combat_Vest_Snow: ModularVestSystem_Base {};
class MVS_Combat_Vest_Multicam: ModularVestSystem_Base {};
class MVS_Combat_Vest_Multicam_Black: ModularVestSystem_Base {};
class MVS_Combat_Vest_Multicam_Tropic: ModularVestSystem_Base {};
	
class Modular_Belt_Base extends Clothing
{
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo( parent ) )
		{
			return false;
		}
		
		if(!IsEmpty())
		{
			return false;
		}
		
		return IsEmpty();
	}
	
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
        if  ( attachment.IsKindOf("PlateCarrierPouches") )
        {            
            if ( FindAttachmentBySlotName("modular_pouch_2") != NULL || FindAttachmentBySlotName("modular_pouch_12") != NULL)
            {
                return false;
            }
        }   
        if  ( attachment.IsKindOf("Modular_Pouch_Base") )
        {            
            if ( FindAttachmentBySlotName("VestPouch") != NULL  || FindAttachmentBySlotName("modular_pouch_12") != NULL)
            {
                return false;
            }
        }	
        if  ( attachment.IsKindOf("Modular_Pouch_Base_Taco") )
        {            
            if ( FindAttachmentBySlotName("VestPouch") != NULL  || FindAttachmentBySlotName("modular_pouch_2") != NULL)
            {
                return false;
            }
        }		
        return super.CanReceiveAttachment(attachment, slotId);
    }
};

class MVS_Belt_OD: Modular_Belt_Base {};
class MVS_Belt_ERDL: Modular_Belt_Base {};
class MVS_Belt_Tan: Modular_Belt_Base {};
class MVS_Belt_Black: Modular_Belt_Base {};
class MVS_Belt_Snow: Modular_Belt_Base {};
class MVS_Belt_Multicam: Modular_Belt_Base {};
class MVS_Belt_Multicam_Black: Modular_Belt_Base {};
class MVS_Belt_Multicam_Tropic: Modular_Belt_Base {};

class ModularVestSystem_Heavy extends Clothing
{
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo( parent ) )
		{
			return false;
		}
		
		if(!IsEmpty())
		{
			return false;
		}
		
		return IsEmpty();
	}
};

class MVS_Combat_Vest_Heavy_OD: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_ERDL: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_Tan: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_Black: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_Snow: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_Multicam: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_Multicam_Tropic: ModularVestSystem_Heavy {};
class MVS_Combat_Vest_Heavy_Multicam_Black: ModularVestSystem_Heavy {};

class ModularChestRig_Base extends Clothing
{
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo( parent ) )
		{
			return false;
		}
		
		if(!IsEmpty())
		{
			return false;
		}
		
		return IsEmpty();
	}
	
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
        if  ( attachment.IsKindOf("PlateCarrierPouches") )
        {            
            if ( FindAttachmentBySlotName("modular_pouch_2") != NULL || FindAttachmentBySlotName("modular_pouch_12") != NULL)
            {
                return false;
            }
        }   
        if  ( attachment.IsKindOf("Modular_Pouch_Base") )
        {            
            if ( FindAttachmentBySlotName("VestPouch") != NULL  || FindAttachmentBySlotName("modular_pouch_12") != NULL)
            {
                return false;
            }
        }	
        if  ( attachment.IsKindOf("Modular_Pouch_Base_Taco") )
        {            
            if ( FindAttachmentBySlotName("VestPouch") != NULL  || FindAttachmentBySlotName("modular_pouch_2") != NULL)
            {
                return false;
            }
        }		
        return super.CanReceiveAttachment(attachment, slotId);
    }
};

class MVS_ChestRig_OD: ModularChestRig_Base {};
class MVS_ChestRig_ERDL: ModularChestRig_Base {};
class MVS_ChestRig_Tan: ModularChestRig_Base {};
class MVS_ChestRig_Black: ModularChestRig_Base {};
class MVS_ChestRig_Snow: ModularChestRig_Base {};
class MVS_ChestRig_Multicam: ModularChestRig_Base {};
class MVS_ChestRig_Multicam_Tropic: ModularChestRig_Base {};
class MVS_ChestRig_Multicam_Black: ModularChestRig_Base {};