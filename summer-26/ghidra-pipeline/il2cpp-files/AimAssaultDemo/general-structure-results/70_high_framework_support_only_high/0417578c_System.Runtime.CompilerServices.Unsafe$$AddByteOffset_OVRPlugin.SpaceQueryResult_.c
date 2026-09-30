/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AddByteOffset<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0417578c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AddByteOffset<OVRPlugin_SpaceQueryResult>
               (long param_1,int param_2,int param_3,undefined8 *param_4,undefined8 param_5,
               long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (*(long *)(param_6 + 0x38) == 0) {
    FUN_037756d4(param_6);
  }
  if (param_1 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar4 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d902d8);
    FUN_061a1b40(uVar4,uVar5,0);
  }
  else if ((param_3 < 0) || (param_2 < 0)) {
    puVar1 = PTR_DAT_07d868a0;
    if (-1 < param_2) {
      puVar1 = PTR_DAT_07d8eec8;
    }
    uVar5 = thunk_FUN_037a15ac(puVar1);
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar4 = thunk_FUN_037788cc();
    uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d95d88);
    FUN_061a5334(uVar4,uVar5,uVar3,0);
  }
  else {
    if (param_3 <= *(int *)(param_1 + 0x18) - param_2) {
      lVar2 = *(long *)(*(long *)(param_6 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      local_50 = param_4[2];
      uStack_58 = param_4[1];
      local_60 = *param_4;
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_04a9e06c(**(long **)(lVar2 + 0xb8),param_1,param_2,param_3,&local_60,param_5,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x30));
      return;
    }
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar4 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d95d90);
    FUN_061a843c(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar4,param_6);
}


