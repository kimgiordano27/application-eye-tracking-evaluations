/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 07c7eecc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_x9;
  int *in_x10;
  long unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_044822ac();
      goto LAB_07c7eefc;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
LAB_07c7eefc:
  uVar4 = (*(code *)*puVar3)();
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x28) = uVar4;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x21 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


