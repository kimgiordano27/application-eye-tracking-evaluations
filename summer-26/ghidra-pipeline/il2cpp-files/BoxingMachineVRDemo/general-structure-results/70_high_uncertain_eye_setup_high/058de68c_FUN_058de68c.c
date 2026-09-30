/*
FUNCTION_NAME: FUN_058de68c
ENTRY_POINT: 058de68c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_058de68c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_4a0 [8];
  undefined1 auStack_498 [4];
  undefined4 local_494;
  undefined1 auStack_400 [4];
  undefined4 local_3fc;
  undefined1 auStack_368 [4];
  undefined4 local_364;
  long local_2d0 [9];
  undefined4 local_288;
  undefined1 auStack_280 [544];
  
  puVar2 = OVRPlugin_OVRP_1_78_0_TypeInfo;
  if ((DAT_06b80b3a & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_81_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_78_0_TypeInfo);
    DAT_06b80b3a = 1;
  }
  iVar4 = FUN_03799000(param_1 + 0x160,*(undefined8 *)puVar2);
  iVar1 = *(int *)(param_1 + 0x160);
  if (iVar1 < iVar4) {
    if (iVar1 == 0) {
      plVar5 = (long *)(param_1 + 0x338);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x388);
      if (lVar6 == 0) goto LAB_058de8cc;
      if (*(uint *)(lVar6 + 0x18) <= iVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar5 = (long *)(lVar6 + (long)(int)(iVar1 - 1U) * 0x220 + 0x1f0);
    }
    lVar6 = *plVar5;
    if (lVar6 != 0) goto LAB_058de79c;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
  FUN_0636a6b4(lVar6,uVar7,0);
  if (lVar6 == 0) {
LAB_058de8cc:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_058de79c:
  puVar3 = OVRPlugin_OVRP_1_81_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_7_0_TypeInfo;
  *(undefined4 *)(lVar6 + 0xfc) = param_3;
  *(undefined4 *)(lVar6 + 0x100) = param_2;
  *(undefined4 *)(lVar6 + 400) = param_4;
  *(undefined4 *)(lVar6 + 0x194) = param_5;
  *(undefined8 *)(lVar6 + 0x180) = param_6;
  thunk_FUN_02dd37b4(lVar6 + 0x180,param_6);
  *(undefined8 *)(lVar6 + 0x188) = param_7;
  thunk_FUN_02dd37b4(lVar6 + 0x188,param_7);
  FUN_03795394(param_1 + 0x138,param_2,10,*(undefined8 *)puVar2);
  FUN_03798284(param_1 + 0x148,param_8,10,*(undefined8 *)puVar3);
  memset(local_4a0,0,0x220);
  local_2d0[0] = lVar6;
  thunk_FUN_02dd37b4(local_2d0,lVar6);
  local_4a0[0] = 0;
  memset(auStack_498,0,0x98);
  local_494 = 3;
  memset(auStack_400,0,0x98);
  local_3fc = 3;
  memset(auStack_368,0,0x98);
  local_364 = 3;
  uVar7 = *(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo;
  local_2d0[2] = 0;
  local_2d0[1] = 0;
  local_2d0[4] = 0;
  local_2d0[3] = 0;
  local_2d0[6] = 0;
  local_2d0[5] = 0;
  local_2d0[8] = 0;
  local_2d0[7] = 0;
  local_288 = 0;
  memcpy(auStack_280,local_4a0,0x220);
  FUN_03799cc4(param_1 + 0x160,auStack_280,10,uVar7);
  return;
}


