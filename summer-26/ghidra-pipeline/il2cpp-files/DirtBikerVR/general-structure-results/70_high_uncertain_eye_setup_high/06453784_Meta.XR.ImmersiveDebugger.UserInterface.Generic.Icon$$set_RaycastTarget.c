/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_RaycastTarget
ENTRY_POINT: 06453784
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget(long param_1)

{
  ulong uVar1;
  int in_w4;
  uint unaff_w19;
  long unaff_x22;
  long *unaff_x23;
  
  param_1 = param_1 - in_w4;
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar1 = (**(code **)(*unaff_x23 + 0x1b8))();
    if ((uVar1 & 1) != 0) break;
    param_1 = param_1 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


