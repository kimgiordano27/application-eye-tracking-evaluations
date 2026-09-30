/*
FUNCTION_NAME: FUN_075b9cbc
ENTRY_POINT: 075b9cbc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075b9cbc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_0826e487 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(OVRPlugin_LogLevel_TypeInfo);
    DAT_0826e487 = 1;
  }
  puVar1 = OVRPlugin_LogLevel_TypeInfo;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) < 4)) {
    if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0755de80(*(undefined8 *)puVar1,0);
  }
  else {
    FUN_075b9bdc(param_1,param_2);
    lVar2 = FUN_075a73b4(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_075b9dc8(&local_60);
    uVar3 = (ulong)*(uint *)(param_2 + 0x18);
    uVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 0x28);
    do {
      if (uVar3 <= uVar4) {
LAB_075b9dc0:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      uVar7 = puVar5[-1];
      uVar8 = *puVar5;
      uVar6 = FUN_0759745c(puVar5[-2],&local_60,0);
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
      if (uVar3 <= uVar4) goto LAB_075b9dc0;
      uVar4 = uVar4 + 1;
      puVar5[-2] = uVar6;
      puVar5[-1] = uVar7;
      *puVar5 = uVar8;
      puVar5 = puVar5 + 3;
    } while (uVar4 != 4);
  }
  return;
}


