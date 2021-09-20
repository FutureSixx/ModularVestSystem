modded class ItemBase
{  	
	void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}    

    string Get_MVSItemName()
    {
        return "Armor_Rack";
    }
};