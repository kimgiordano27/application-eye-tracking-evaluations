/*
FUNCTION_NAME: OVRPlugin$$CreateInsightTriangleMesh
ENTRY_POINT: 05670c84
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CreateInsightTriangleMesh(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_stack_00000008;
  
  if (param_1 != 0) {
    uVar1 = FUN_04e95158();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (in_stack_00000008 != 0) {
      if (*(char *)(in_stack_00000008 + 0x91) == '\0') {
        lVar2 = *(long *)(in_stack_00000008 + 0x98);
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        lVar2 = *(long *)(in_stack_00000008 + 0xa0);
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_0634ee08(lVar2,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


