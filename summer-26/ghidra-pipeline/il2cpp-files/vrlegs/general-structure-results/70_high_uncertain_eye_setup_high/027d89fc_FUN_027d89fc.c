/*
FUNCTION_NAME: FUN_027d89fc
ENTRY_POINT: 027d89fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027d8b10) */
/* WARNING: Removing unreachable block (ram,0x027d8b08) */

void FUN_027d89fc(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char local_34 [4];
  
  local_34[0] = '\0';
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_027d84cc(param_1,0x80000000,0x80000000);
  iVar1 = FUN_027d8640(param_1);
  if (0 < iVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    local_34[0] = '\0';
    FUN_027e0bd8(uVar2,local_34,0);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_01a4b338();
    FUN_027e1160(uVar5,0);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
  }
  lVar3 = *(long *)(param_1 + 0x18);
  thunk_FUN_01a4b338();
  if ((lVar3 != 0) && ((param_2 & 1) == 0)) {
    local_34[0] = '\0';
    FUN_027e0bd8(lVar3,local_34,0);
    lVar4 = *(long *)(param_1 + 0x18);
    thunk_FUN_01a4b338();
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      thunk_FUN_01a4b338();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de940(lVar4,0);
    }
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar3,0);
    }
  }
  return;
}


