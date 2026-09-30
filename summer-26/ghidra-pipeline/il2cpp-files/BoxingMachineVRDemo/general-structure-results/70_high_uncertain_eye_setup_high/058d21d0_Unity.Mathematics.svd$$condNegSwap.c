/*
FUNCTION_NAME: Unity.Mathematics.svd$$condNegSwap
ENTRY_POINT: 058d21d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_svd__condNegSwap(void *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_470;
  undefined8 local_468;
  undefined4 local_460;
  uint uStack_45c;
  undefined1 auStack_458 [1024];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  memset(&local_468,0,0x410);
  if (param_2 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_04f77010(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(OVRManager_SystemHeadsetType_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar5);
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar1 = uVar2;
  if (0x3ff < (int)uVar2) {
    uVar1 = 0x400;
  }
  local_470 = (ulong)local_470._4_4_ << 0x20;
  Unity_Mathematics_math__uint2x2(&local_470,0x58,0x48,0x55,0x30,0);
  uVar6 = local_470 & 0xffffffff;
  local_470 = 0;
  FUN_058f3238(&local_470,uVar6,0x410,0);
  uVar4 = local_470;
  memset(auStack_458,0,0x400);
  local_468 = uVar4;
  local_460 = 0;
  puVar7 = (undefined1 *)0x0;
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar7 = (undefined1 *)(param_2 + 0x20);
  }
  if (0 < (int)uVar2) {
    uVar2 = uVar1;
    if ((int)uVar1 < 2) {
      uVar2 = 1;
    }
    uVar6 = (ulong)uVar2;
    puVar8 = auStack_458;
    do {
      uVar6 = uVar6 - 1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar6 != 0);
  }
  uStack_45c = uVar1;
  memcpy(param_1,&local_468,0x410);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


