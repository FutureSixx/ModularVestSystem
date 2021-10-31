modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);

        pType.AddItemInHandsProfileIK("MVS_Canteen_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,    "dz/anims/anm/player/ik/gear/water_bottle.anm");

    }
    
    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);

        pType.AddItemInHandsProfileIK("MVS_Pack_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/mountain_g.anm");
    }
};