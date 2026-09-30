/*
FUNCTION_NAME: FUN_058d693c
ENTRY_POINT: 058d693c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


long FUN_058d693c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined1 auStack_458 [8];
  undefined8 local_450;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_06b80afb & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_0_0_TypeInfo);
    DAT_06b80afb = 1;
  }
  memset(auStack_458,0,0x410);
  FUN_058f3e10(&local_868,0);
  memcpy(auStack_458,&local_868,0x410);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar3 = FUN_0345c524(param_1,auStack_458,*(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo);
  if ((lVar3 == -1) || (((uint)lVar3 >> 1 & 1) == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_3 = 0;
    thunk_FUN_02dd37b4(param_3,0);
    uVar4 = 0;
    *param_4 = 0;
  }
  else {
    local_878 = 0;
    uStack_870 = 0;
    lVar1 = *(long *)OVRPlugin_OVRP_1_0_0_TypeInfo;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar1 = *(long *)(param_1 + 0xf0);
    }
    FUN_058d7f14(&local_878,lVar1,local_450,0);
    local_868 = 0;
    uStack_860 = 0;
    local_858 = 0;
    FUN_03dcd8ac(&local_868,local_878,uStack_870,*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
    param_2[2] = local_858;
    param_2[1] = uStack_860;
    *param_2 = local_868;
    thunk_FUN_02dd37b4(param_2 + 1,0);
    uVar4 = FUN_058f3cc0(auStack_458,0);
    *param_3 = uVar4;
    thunk_FUN_02dd37b4(param_3,uVar4);
    uVar4 = FUN_058f3ba0(auStack_458,0);
    *param_4 = uVar4;
  }
  thunk_FUN_02dd37b4(param_4,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


