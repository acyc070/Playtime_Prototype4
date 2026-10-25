using UnrealBuildTool;

public class Playtime_Prototype4EditorTarget : TargetRules {
	public Playtime_Prototype4EditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Playtime_Prototype4",
		});
	}
}
