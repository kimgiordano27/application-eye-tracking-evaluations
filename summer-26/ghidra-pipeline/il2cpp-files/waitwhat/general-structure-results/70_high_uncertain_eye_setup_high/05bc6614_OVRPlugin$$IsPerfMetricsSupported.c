/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 05bc6614
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPerfMetricsSupported(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  long *in_x10;
  int *piVar3;
  long unaff_x21;
  
  if (in_x9 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
        goto LAB_05bc6658;
      }
      in_x9 = in_x9 + -1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bc6658:
  uVar2 = (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
    *(undefined8 *)(unaff_x21 + 0x30) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


