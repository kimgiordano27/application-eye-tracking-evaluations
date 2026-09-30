/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 06dff1cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__CheckBox(long *param_1)

{
  int iVar1;
  int iVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  
  *(int *)(unaff_x19 + 0x10) = in_w10 + 1;
  iVar2 = in_w10 + 1;
  while( true ) {
    if (param_1 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x14) = 0;
      return 0;
    }
    iVar1 = iVar2 - *(int *)(param_1 + 1);
    if (iVar2 < *(int *)(param_1 + 1)) break;
    *(int *)(unaff_x19 + 0x10) = iVar1;
    param_1 = (long *)*param_1;
    *(long **)(unaff_x19 + 8) = param_1;
    iVar2 = iVar1;
  }
  if ((*(byte *)(*(long *)(in_x9 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  *(long *)(unaff_x19 + 0x14) = param_1[(long)iVar2 + 2];
  return 1;
}


