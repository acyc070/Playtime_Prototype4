using UnrealBuildTool;

public class Playtime_Prototype4GameTarget : TargetRules {
	public Playtime_Prototype4GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Playtime_Prototype4",
		});
	}
}
