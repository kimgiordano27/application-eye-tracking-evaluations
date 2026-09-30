/*
FUNCTION_NAME: FUN_058d5638
ENTRY_POINT: 058d5638
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_058d5638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  if ((DAT_06b80aec & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(OVRPlugin_GUID_TypeInfo);
    DAT_06b80aec = 1;
  }
  uVar3 = FUN_058d7d80(param_1,param_2,0,0,0);
  puVar1 = PTR_DAT_06767838;
  if ((uVar3 & 1) != 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar5 = thunk_FUN_02d9d534();
    uVar6 = thunk_FUN_02dc61f4(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
    uVar7 = thunk_FUN_02dc61f4(OVRPlugin_Hand_TypeInfo);
    FUN_04f77088(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_02dc61f4(OVRPlugin_HandStatus_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,uVar6);
  }
  if (*(int *)(*(long *)PTR_DAT_06767838 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_058d5794(param_1,param_2);
  if (uVar2 == 0xffffffff) {
    local_28 = 0;
  }
  else {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    local_28 = 0;
    FUN_03dcd47c(&local_28,*(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20),
                 *(undefined8 *)OVRPlugin_GUID_TypeInfo);
  }
  return local_28;
}


