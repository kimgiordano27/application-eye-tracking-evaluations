/*
FUNCTION_NAME: FUN_029a31a4
ENTRY_POINT: 029a31a4
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


/* WARNING: Removing unreachable block (ram,0x029a32c0) */

void FUN_029a31a4(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_28;
  char local_24 [4];
  
  local_24[0] = '\0';
  if (0x7fff < param_3) {
    local_28 = param_3;
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar3 = thunk_FUN_01a89a98(uVar3,&local_28);
    uVar1 = thunk_FUN_01a6ca08(PTR_DAT_03d08190);
    uVar3 = FUN_025be86c(uVar1,param_4,uVar3,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
    uVar1 = thunk_FUN_01a89e68();
    FUN_02765308(uVar1,uVar3,0);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d08198);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar1,uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar3,local_24,0);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(char *)(lVar2 + 0x20) = (char)(param_3 >> 8);
  if (*(int *)(lVar2 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(char *)(lVar2 + 0x21) = (char)param_3;
  if (param_2 != 0) {
    FUN_029b3ef8(param_2,lVar2,0,2,0);
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


