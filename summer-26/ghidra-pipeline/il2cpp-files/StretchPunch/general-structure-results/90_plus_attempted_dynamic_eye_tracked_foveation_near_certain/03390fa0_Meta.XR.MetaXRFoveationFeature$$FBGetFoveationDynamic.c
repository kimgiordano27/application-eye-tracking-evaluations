/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 03390fa0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar3 = StringLiteral_4737;
  puVar2 = StringLiteral_4487;
  if ((DAT_044a6784 & 1) == 0) {
    FUN_01d7d918(StringLiteral_4737);
    FUN_01d7d918(StringLiteral_4487);
    DAT_044a6784 = 1;
  }
  uVar1 = *param_1;
  auVar4 = FUN_0263ef74(0,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0338f120(uVar1,auVar4._0_8_,auVar4._8_8_,param_2);
  return;
}


