class MVS_CombatShirt_Base extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};

class MVS_CombatShirt_Tan extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_OD extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_Black extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_ERDL extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_Snow extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_Multicam extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_Multicam_Tropic extends MVS_CombatShirt_Base {};
class MVS_CombatShirt_Multicam_Black extends MVS_CombatShirt_Base {};

class MVS_CombatPants_Base extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};

class MVS_CombatPants_Tan extends MVS_CombatPants_Base {};
class MVS_CombatPants_OD extends MVS_CombatPants_Base {};
class MVS_CombatPants_Black extends MVS_CombatPants_Base {};
class MVS_CombatPants_ERDL extends MVS_CombatPants_Base {};
class MVS_CombatPants_Snow extends MVS_CombatPants_Base {};
class MVS_CombatPants_Multicam extends MVS_CombatPants_Base {};
class MVS_CombatPants_Multicam_Tropic extends MVS_CombatPants_Base {};
class MVS_CombatPants_Multicam_Black extends MVS_CombatPants_Base {};