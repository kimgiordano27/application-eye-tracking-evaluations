/*
FUNCTION_NAME: FUN_02637370
ENTRY_POINT: 02637370
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02637420) */

void FUN_02637370(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char local_24 [4];
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x2d8))(plVar1,*(undefined8 *)(*plVar1 + 0x2e0));
  local_24[0] = '\0';
  FUN_027e0bd8(uVar2,local_24,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(param_2 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined4 *)(*(long *)(param_2 + 0x68) + 0x20) = 2;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar1 + 0x308))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x310));
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_026374a0(param_1);
  }
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  return;
}


