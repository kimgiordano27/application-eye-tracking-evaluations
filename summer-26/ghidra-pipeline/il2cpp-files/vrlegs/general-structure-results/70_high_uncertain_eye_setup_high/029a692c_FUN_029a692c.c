/*
FUNCTION_NAME: FUN_029a692c
ENTRY_POINT: 029a692c
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


/* WARNING: Removing unreachable block (ram,0x029a69dc) */

void FUN_029a692c(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  char local_24 [4];
  
  if ((param_4 & 1) != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb98c(param_2,0x6b,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar2,local_24,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(char *)(lVar1 + 0x20) = (char)((ulong)param_3 >> 8);
  if (*(int *)(lVar1 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(char *)(lVar1 + 0x21) = (char)param_3;
  if (param_2 != 0) {
    FUN_029b3ef8(param_2,lVar1,0,2,0);
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


