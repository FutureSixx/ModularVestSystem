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
}


class Modular_Pouch_Base_Taco extends MVS_Pouch_Base
{
    override bool CanDisplayAttachmentSlot( string slot_name )
    {    
        
		if (!super.CanDisplayAttachmentSlot(slot_name))
            return false;
		
		if ( slot_name == "magazine4" )
        {
            if ( this.FindAttachmentBySlotName("magazine4") == NULL ) 
            {
				return false;
            }
            return true;        
        }
		if ( slot_name == "magazine5" )
        {
            if ( this.FindAttachmentBySlotName("magazine5") == NULL ) 
            {
				return false;
            }
            return true;        
        }
		if ( slot_name == "magazine7" )
        {
            if ( this.FindAttachmentBySlotName("magazine7") == NULL ) 
            {
				return false;
            }
            return true;        
        }

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
	
}
	
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
	
	
    override bool CanDisplayAttachmentSlot( string slot_name )
    {    
        
		if (!super.CanDisplayAttachmentSlot(slot_name))
            return false;
		
		if ( slot_name == "modular_pouch_2" )
        {
            if ( this.FindAttachmentBySlotName("modular_pouch_2") == NULL) 
            {
				return false;
            }
            return true;        
        }
        return true;
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
	
	
    override bool CanDisplayAttachmentSlot( string slot_name )
    {    
        
		if (!super.CanDisplayAttachmentSlot(slot_name))
            return false;
		
		if ( slot_name == "modular_pouch_2" )
        {
            if ( this.FindAttachmentBySlotName("modular_pouch_2") == NULL) 
            {
				return false;
            }
            return true;        
        }
        return true;
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
	
	
    override bool CanDisplayAttachmentSlot( string slot_name )
    {    
        
		if (!super.CanDisplayAttachmentSlot(slot_name))
            return false;
		
		if ( slot_name == "modular_pouch_2" )
        {
            if ( this.FindAttachmentBySlotName("modular_pouch_2") == NULL) 
            {
				return false;
            }
            return true;        
        }
        return true;
    }
}
