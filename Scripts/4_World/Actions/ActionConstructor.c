modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
        super.RegisterActions(actions);

        actions.Insert( ActionLiftVisor );
        actions.Insert( ActionLowerVisor );
    }
}