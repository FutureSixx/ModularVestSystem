modded class Hologram
{	
	ItemBase FurnitureCollision()
	{
		vector center;
		vector relative_ofset; //we need to lift BBox, because it is calculated from the bottom of projection, and not from the middle
		vector absolute_ofset = "0 0.01 0"; //we need to lift BBox even more, because it colliddes with house floors due to various reasons (probably geometry or float imperfections)
		vector orientation = GetProjectionOrientation();
		vector edge_length;
		vector min_max[2];
		ref array<Object> excluded_objects = new array<Object>;
		ref array<Object> collided_objects = new array<Object>;
		
		m_Projection.GetCollisionBox( min_max );
		relative_ofset[1] = ( min_max[1][1] - min_max[0][1] ) / 2.4;
		center = m_Projection.GetPosition() + relative_ofset + absolute_ofset;
		edge_length = GetCollisionBoxSize( min_max );
		excluded_objects.Insert( m_Projection );

		if ( GetGame().IsBoxColliding( center, orientation, edge_length, excluded_objects, collided_objects ) )
		{	
			for( int i = 0; i < collided_objects.Count(); i++ )
			{
				Object obj_collided = collided_objects[i];


				if( obj_collided.IsInherited(Armor_Rack) )
				{
					Armor_Rack var_Armor_Rack = Armor_Rack.Cast(obj_collided);
					return var_Armor_Rack;
				}				
			}
		}
		return null;
	}

	override string ProjectionBasedOnParent()
	{
		ArmorRack_Kit item_in_hands = ArmorRack_Kit.Cast( m_Parent );
		if ( item_in_hands )
		{
			return item_in_hands.Get_MVSItemName();
		}
		
		ItemBase iteminhands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
		if (iteminhands.IsInherited(ArmorRack_Kit))
			return "Armor_Rack";		
					
		return super.ProjectionBasedOnParent();
	}
	/*
    override EntityAI PlaceEntity( EntityAI entity_for_placing )
    {    
        ItemBase item_in_hands = ItemBase.Cast( m_Player.GetHumanInventory().GetEntityInHands() );
    
        if ( item_in_hands && item_in_hands.CanMakeGardenplot() )
        {
            Class.CastTo(entity_for_placing, GetGame().CreateObject( m_Projection.GetType(), m_Projection.GetPosition() ));
        }
            
        if( entity_for_placing.CanAffectPathgraph() )
        {        
            entity_for_placing.SetAffectPathgraph( true, false );
            
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
        }
        
        return entity_for_placing;
    } 
	*/
    override void EvaluateCollision(ItemBase action_item = null)
    {
		ItemBase item_in_hands = m_Parent;
		
        if (item_in_hands.IsInherited(ArmorRack_Kit))
        {
            SetIsColliding(false);
            return;
        }

        super.EvaluateCollision();
    }
};