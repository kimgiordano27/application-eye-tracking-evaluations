/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 05717404
PROGRAM: Untangled-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(long param_1,long param_2)

{
  long unaff_x21;
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0xfd0);
  if ((*(byte *)(unaff_x22 + 0x7f3) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d57fd0);
    *(undefined1 *)(unaff_x22 + 0x7f3) = 1;
  }
  FUN_0569bb6c(param_1,0);
  FUN_056f1adc(param_2,*puVar1,0);
  *(long *)(param_1 + 0xe0) = param_2;
  thunk_FUN_02f411dc((long *)(param_1 + 0xe0),param_2);
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0x20);
    thunk_FUN_02f411dc((undefined8 *)(param_1 + 0xf0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


