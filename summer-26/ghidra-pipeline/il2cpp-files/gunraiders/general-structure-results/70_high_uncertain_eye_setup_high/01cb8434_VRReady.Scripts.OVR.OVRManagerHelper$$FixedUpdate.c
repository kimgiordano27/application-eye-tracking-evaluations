/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$FixedUpdate
ENTRY_POINT: 01cb8434
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void VRReady_Scripts_OVR_OVRManagerHelper__FixedUpdate(undefined8 param_1)

{
  code *in_stack_00000058;
  long in_stack_00000068;
  byte in_stack_00000088;
  void *in_stack_00000098;
  byte in_stack_000000a0;
  void *in_stack_000000b0;
  byte in_stack_000000b8;
  void *in_stack_000000c8;
  byte in_stack_000000d0;
  void *in_stack_000000e0;
  byte in_stack_000000e8;
  void *in_stack_000000f8;
  
  if ((in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    operator_delete(in_stack_000000b0);
  }
  if ((in_stack_000000b8 & 1) != 0) {
    operator_delete(in_stack_000000c8);
  }
  if ((in_stack_000000d0 & 1) != 0) {
    operator_delete(in_stack_000000e0);
  }
  if ((in_stack_000000e8 & 1) != 0) {
    operator_delete(in_stack_000000f8);
  }
  if (in_stack_00000068 != 0) {
    (*in_stack_00000058)(in_stack_00000068);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01cf64e4(param_1);
}


