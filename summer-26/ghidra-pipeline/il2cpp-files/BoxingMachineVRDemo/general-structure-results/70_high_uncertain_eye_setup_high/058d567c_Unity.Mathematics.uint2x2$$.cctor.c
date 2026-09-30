/*
FUNCTION_NAME: Unity.Mathematics.uint2x2$$.cctor
ENTRY_POINT: 058d567c
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


undefined8 Unity_Mathematics_uint2x2___cctor(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  
  uVar3 = FUN_058d7d80();
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
  uVar2 = FUN_058d5794();
  if (uVar2 == 0xffffffff) {
    in_stack_00000008 = 0;
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
    in_stack_00000008 = 0;
    FUN_03dcd47c(&stack0x00000008,*(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20),
                 *(undefined8 *)OVRPlugin_GUID_TypeInfo);
  }
  return in_stack_00000008;
}


