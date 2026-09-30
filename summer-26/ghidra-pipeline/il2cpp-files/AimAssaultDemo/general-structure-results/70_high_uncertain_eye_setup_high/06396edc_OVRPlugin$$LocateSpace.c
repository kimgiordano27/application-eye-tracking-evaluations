/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 06396edc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__LocateSpace(void)

{
  long lVar1;
  ulong uVar2;
  uint in_w8;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  int unaff_w24;
  
  if (unaff_w24 != 0) {
    return (ulong)(in_w8 & 1);
  }
  lVar3 = *(long *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)PTR_DAT_07d867b8;
    lVar1 = thunk_FUN_037787d0(lVar3,uVar4);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar3,uVar4);
    }
  }
  uVar4 = FUN_061b684c(lVar1,0);
  uVar2 = FUN_060bf6bc(uVar4);
  return uVar2;
}


