/*
FUNCTION_NAME: OVRPlugin.OVRP_1_107_0$$.cctor
ENTRY_POINT: 056a85a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_107_0___cctor(long param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long in_stack_00000008;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + 0x38) != 0)) {
    FUN_056a7044();
    if ((in_stack_00000008 != 0) && (*(long *)(in_stack_00000008 + 0x18) != 0)) {
      FUN_056a7044();
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        FUN_04df9a98(*(long *)(unaff_x20 + 0x40),unaff_w19,
                     *(undefined8 *)System_Threading_Tasks_Task<int>_TypeInfo);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


