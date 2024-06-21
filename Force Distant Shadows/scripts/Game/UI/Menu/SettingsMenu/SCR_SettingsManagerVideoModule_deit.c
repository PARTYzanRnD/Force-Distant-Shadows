/*
modded class SCR_ChimeraCharacter : ChimeraCharacter
{
	override void EOnInit(IEntity owner)
	{
		int dshadows;
		GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Get("DistantShadowsQuality",dshadows);
		//Print("____shad" + dshadows.ToString());
		if (dshadows < 1)
		{
			GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Set("DistantShadowsQuality", 1);
			//GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Get("DistantShadowsQuality",dshadows);
			//Print("____shad" + dshadows.ToString());
			GetGame().UserSettingsChanged();
		};
		super.EOnInit( owner );		
	}
}*/
modded class SCR_BaseGameMode : BaseGameMode
{
	override protected void OnGameModeStart()
	{
		int dshadows;
		GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Get("DistantShadowsQuality",dshadows);
		//Print("____shad" + dshadows.ToString());
		if (dshadows < 1)
		{
			GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Set("DistantShadowsQuality", 1);
			//GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Get("DistantShadowsQuality",dshadows);
			//Print("____shad" + dshadows.ToString());
			GetGame().UserSettingsChanged();
		};
		super.OnGameModeStart();
	}
}

modded class SCR_SettingsSubMenuBase: SCR_SubMenuBase
{
	override protected void OnMenuItemChanged(SCR_SettingsBindingBase binding)
	{
		int dshadows;
		GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Get("DistantShadowsQuality",dshadows);
		//Print("____shad" + dshadows);
		if (dshadows < 1)
		{
			GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Set("DistantShadowsQuality", 1);
			//GetGame().GetEngineUserSettings().GetModule("VideoUserSettings").Get("DistantShadowsQuality",dshadows);
			//Print("____shad" + dshadows.ToString());
		}		
		GetGame().UserSettingsChanged();
		super.OnMenuItemChanged(binding);
	}
};
