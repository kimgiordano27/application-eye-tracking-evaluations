/*
FUNCTION_NAME: FUN_028aaa48
ENTRY_POINT: 028aaa48
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


/* WARNING: Removing unreachable block (ram,0x028aab60) */

void FUN_028aaa48(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char local_34 [4];
  
  if ((DAT_04126829 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdc3b8);
    FUN_01ab69ac(PTR_DAT_03cc0648);
    DAT_04126829 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar4,local_34,0);
  if (*(int *)(param_1 + 0xc0) != param_3) {
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = *(long *)PTR_DAT_03cc0648;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
  }
  *(int *)(param_1 + 0xc0) = param_3;
  if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02216540(*(long *)(param_1 + 0xb8),param_2,*(undefined8 *)PTR_DAT_03cdc3b8);
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return;
}


