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
}
	
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
}

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
}

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
}