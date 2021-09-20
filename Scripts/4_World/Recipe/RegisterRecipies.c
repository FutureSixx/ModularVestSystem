modded class PluginRecipesManagerBase
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new CraftPatchAUS1 );
		RegisterRecipe(new CraftPatchAUS2 );
		RegisterRecipe(new CraftPatchCobra);
		RegisterRecipe(new CraftPatchGNR );
		RegisterRecipe(new CraftPatchMED );
		RegisterRecipe(new CraftPatchRFL );
		RegisterRecipe(new CraftPatchSL );
		RegisterRecipe(new CraftPatchSNPR );
		RegisterRecipe(new CraftPatchEOD );
		RegisterRecipe(new CraftPatchTL );
		RegisterRecipe(new CraftPatchUK1 );
		RegisterRecipe(new CraftPatchUK2 );
		RegisterRecipe(new CraftPatchUS1 );
		RegisterRecipe(new CraftPatchUS2 );
		RegisterRecipe(new CraftPatchCAN1 );
		RegisterRecipe(new CraftPatchCAN2 );			
		RegisterRecipe(new CraftArmorRackKit );
		RegisterRecipe(new DeCraftArmorRack );
	}	
}