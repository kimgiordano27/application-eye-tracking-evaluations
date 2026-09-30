/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$set_RaycastTarget
ENTRY_POINT: 0519e9f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget(long param_1)

{
  int iVar1;
  bool in_ZR;
  long *unaff_x19;
  
  if (!in_ZR) {
    FUN_055095dc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  unaff_x19[3] = 0;
  unaff_x19[4] = 0;
  unaff_x19[2] = 0;
  *(int *)(unaff_x19 + 1) = iVar1 + 1;
  return 0;
}


