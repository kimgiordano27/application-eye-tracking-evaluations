/*
FUNCTION_NAME: FUN_029aeb1c
ENTRY_POINT: 029aeb1c
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


/* WARNING: Removing unreachable block (ram,0x029aebe8) */

void FUN_029aeb1c(undefined4 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char local_28 [4];
  undefined4 local_24;
  
  local_24 = 0;
  local_28[0] = '\0';
  if ((param_4 & 1) == 0) {
    if (param_3 == 0) goto LAB_029aebe4;
  }
  else {
    if (param_3 == 0) {
LAB_029aebe4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029bb98c(param_3,5,0);
  }
  uVar1 = FUN_029bb658(param_3,4,&local_24,0);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  local_28[0] = '\0';
  FUN_027e0bd8(uVar3,local_28,0);
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined4 *)(lVar2 + 0x20) = param_1;
  FUN_0279cdc8(lVar2,0,uVar1,local_24,4,0);
  if (local_28[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return;
}


