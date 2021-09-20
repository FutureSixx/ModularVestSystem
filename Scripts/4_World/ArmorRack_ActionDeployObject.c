
modded class ActionDeployObject
{
    override void OnEndServer(ActionData action_data)
    {
        if ( action_data.m_MainItem.IsKindOf("ArmorRack_Kit") )
        {
            PlaceObjectActionData poActionData = PlaceObjectActionData.Cast(action_data);
            if (poActionData && !poActionData.m_AlreadyPlaced)
            {
                EntityAI entity_for_placing = action_data.m_MainItem;
                GetGame().ClearJuncture(action_data.m_Player, entity_for_placing);
                action_data.m_MainItem.SetIsBeingPlaced(false);
            
                if (GetGame().IsMultiplayer())
                {
                    action_data.m_Player.PlacingCancelServer();
                    action_data.m_MainItem.SoundSynchRemoteReset();
                }
                else
                {
                    //local singleplayer
                    action_data.m_Player.PlacingCancelLocal();
                    action_data.m_Player.LocalTakeEntityToHands(entity_for_placing);
                }
            }
            else
            {
                GetGame().ObjectDelete(action_data.m_MainItem);
                action_data.m_MainItem.SetIsDeploySound(false);
                action_data.m_MainItem.SetIsPlaceSound(false);
                action_data.m_MainItem.SoundSynchRemoteReset();
            }
        }
        else
        {
            super.OnEndServer(action_data);
        }
    }
}