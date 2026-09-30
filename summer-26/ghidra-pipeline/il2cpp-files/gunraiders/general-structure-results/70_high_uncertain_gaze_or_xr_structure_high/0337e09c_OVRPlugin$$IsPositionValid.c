/*
FUNCTION_NAME: OVRPlugin$$IsPositionValid
ENTRY_POINT: 0337e09c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__IsPositionValid(undefined8 param_1)

{
  uint uVar1;
  int in_w9;
  long unaff_x23;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_stack_00000018;
  
  if (in_w9 == 0) {
    thunk_FUN_01c1d1e8(param_1);
  }
  uVar2 = FUN_03253790();
  FUN_03295560(0);
  uVar3 = FUN_03253790();
  uVar1 = FUN_0337dd60(uVar2,uVar3);
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


