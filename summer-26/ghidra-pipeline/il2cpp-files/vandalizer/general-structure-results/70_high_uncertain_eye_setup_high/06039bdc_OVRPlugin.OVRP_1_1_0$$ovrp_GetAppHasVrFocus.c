/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 06039bdc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar1 = FUN_03deade0();
  uVar1 = FUN_03df5de8(uVar1,*unaff_x24);
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_0329bf60();
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_0329bf60();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


