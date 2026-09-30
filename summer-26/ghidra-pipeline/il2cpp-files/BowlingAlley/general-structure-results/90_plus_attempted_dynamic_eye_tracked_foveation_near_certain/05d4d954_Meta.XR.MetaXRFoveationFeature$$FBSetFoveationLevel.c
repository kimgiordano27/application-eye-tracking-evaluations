/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 05d4d954
PROGRAM: BowlingAlley-libil2cpp.so
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
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  *(undefined1 *)(unaff_x20 + 0x521) = 1;
  uVar1 = thunk_FUN_032a56a0(*unaff_x21);
  FUN_05d4d79c();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x10),uVar1);
  uVar1 = thunk_FUN_032a56a0(*unaff_x21);
  FUN_05d4d79c();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar1);
  FUN_059660a0();
  return;
}


