/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectTrackerSupported
ENTRY_POINT: 02c34a28
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c34aa8) */
/* WARNING: Removing unreachable block (ram,0x02c34ae4) */
/* WARNING: Removing unreachable block (ram,0x02c34ba8) */
/* WARNING: Removing unreachable block (ram,0x02c34ab0) */

bool OVRPlugin__GetDynamicObjectTrackerSupported(void)

{
  int iVar1;
  long unaff_x19;
  long lVar2;
  int unaff_w22;
  undefined8 in_stack_00000038;
  
  lVar2 = *(long *)(unaff_x19 + 0x28);
  thunk_FUN_0181f594();
  if ((lVar2 != 0) && (iVar1 = *(int *)(unaff_x19 + 0x10), thunk_FUN_0181f594(), iVar1 == 0)) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_0181f594();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_02c35188(lVar2);
  }
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_0181f594();
    thunk_FUN_0181f594();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0184c01c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_02c328cc(&stack0x00000020);
  return unaff_w22 != 0;
}


