/*
FUNCTION_NAME: OVRPlugin$$get_audioInId
ENTRY_POINT: 033bac24
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__get_audioInId(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  int iVar3;
  long unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000018;
  
  while( true ) {
    lVar1 = FUN_0285ef94(param_1,unaff_w19,param_3);
    iVar3 = unaff_w21 + -4;
    unaff_w19 = unaff_w19 + -1;
    if (lVar1 != 0) break;
    if (unaff_w19 < 0) goto LAB_033bac58;
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    param_3 = *unaff_x23;
    param_1 = &stack0x00000008;
    unaff_w21 = iVar3;
  }
  iVar3 = unaff_w21;
  if (lVar1 < 1) {
LAB_033bac58:
    iVar2 = 3;
    unaff_w21 = iVar3;
  }
  else {
    iVar2 = 3;
    do {
      lVar1 = lVar1 * 0x10000;
      iVar2 = iVar2 + -1;
    } while (0 < lVar1);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + unaff_w21;
}


