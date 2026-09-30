/*
FUNCTION_NAME: OVRPlugin$$get_vsyncCount
ENTRY_POINT: 0566a588
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_vsyncCount(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  long in_stack_00000010;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto OVRPlugin__set_vsyncCount;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02dd004c();
OVRPlugin__set_vsyncCount:
  (*(code *)*puVar1)();
  if (in_stack_00000010 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


