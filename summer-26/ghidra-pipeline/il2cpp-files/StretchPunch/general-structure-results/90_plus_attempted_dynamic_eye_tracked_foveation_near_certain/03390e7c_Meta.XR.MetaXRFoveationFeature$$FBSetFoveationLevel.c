/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 03390e7c
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


void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar2 [16];
  
  FUN_01d7d918(StringLiteral_4737);
  FUN_01d7d918(StringLiteral_4487);
  *(undefined1 *)(unaff_x22 + 0x782) = 1;
  uVar1 = *unaff_x19;
  auVar2 = FUN_0263ef74(0,*unaff_x20);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0338f120(uVar1,auVar2._0_8_,auVar2._8_8_,0);
  return;
}


