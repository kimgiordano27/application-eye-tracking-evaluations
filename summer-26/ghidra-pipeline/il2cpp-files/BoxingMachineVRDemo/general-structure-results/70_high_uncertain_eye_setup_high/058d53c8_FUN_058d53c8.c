/*
FUNCTION_NAME: FUN_058d53c8
ENTRY_POINT: 058d53c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_058d53c8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  if ((DAT_06b80aeb & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(OVRPlugin_GUID_TypeInfo);
    DAT_06b80aeb = 1;
  }
  puVar1 = PTR_DAT_06767838;
  if (param_1 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067683f0);
    FUN_04f77010(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar5);
  }
  if (*(int *)(*(long *)PTR_DAT_06767838 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_058d54e8(param_1);
  if (uVar2 == 0xffffffff) {
    local_18 = 0;
  }
  else {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    local_18 = 0;
    FUN_03dcd47c(&local_18,*(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20),
                 *(undefined8 *)OVRPlugin_GUID_TypeInfo);
  }
  return local_18;
}


