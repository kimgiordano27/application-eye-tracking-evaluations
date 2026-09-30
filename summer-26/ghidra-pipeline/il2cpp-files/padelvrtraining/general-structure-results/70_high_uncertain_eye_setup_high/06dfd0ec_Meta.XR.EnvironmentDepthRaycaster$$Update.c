/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Update
ENTRY_POINT: 06dfd0ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__Update(long param_1)

{
  int iVar1;
  bool in_ZR;
  long *unaff_x19;
  
  if (!in_ZR) {
    FUN_07199bdc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  unaff_x19[5] = 0;
  unaff_x19[4] = 0;
  unaff_x19[7] = 0;
  unaff_x19[6] = 0;
  *(int *)(unaff_x19 + 1) = iVar1 + 1;
  unaff_x19[8] = 0;
  return 0;
}


