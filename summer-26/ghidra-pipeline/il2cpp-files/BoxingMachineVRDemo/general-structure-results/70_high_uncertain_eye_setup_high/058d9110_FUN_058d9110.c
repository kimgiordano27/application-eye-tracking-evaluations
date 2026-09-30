/*
FUNCTION_NAME: FUN_058d9110
ENTRY_POINT: 058d9110
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_058d9110(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_250 [464];
  long local_80;
  
  puVar1 = PTR_DAT_06768438;
  if ((DAT_06b80b22 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(OVRPlugin_OVRP_1_37_0_TypeInfo);
    DAT_06b80b22 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_058576fc(0);
  puVar1 = OVRPlugin_OVRP_1_37_0_TypeInfo;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0601ea80(*(undefined8 *)puVar1,0);
  }
  if (param_2 < 0) {
    if (*(int *)(param_1 + 0x128) == -1) {
      iVar2 = -(uint)(*(int *)(param_1 + 0x160) < 1);
    }
    else {
      iVar2 = *(int *)(param_1 + 300);
    }
  }
  else {
    iVar2 = FUN_058d9278(param_1,param_2);
  }
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    FUN_03799508(auStack_250,param_1 + 0x160,iVar2,*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo);
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = *(undefined8 *)(local_80 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_0606a004(uVar5,0,0);
  }
  return uVar3 & 1;
}


