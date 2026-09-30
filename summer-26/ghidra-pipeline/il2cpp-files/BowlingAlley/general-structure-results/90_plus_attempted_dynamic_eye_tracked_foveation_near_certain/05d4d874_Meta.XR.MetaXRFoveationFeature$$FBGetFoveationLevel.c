/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 05d4d874
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


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x21 + 0xc00);
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b0c00);
    *(undefined1 *)(unaff_x20 + 0x565) = 1;
  }
  uVar1 = thunk_FUN_032a56a0(*puVar2);
  FUN_05d4d79c();
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  thunk_FUN_0333a630((undefined8 *)(param_2 + 0x18),uVar1);
  FUN_059660a0(param_2,0);
  return;
}


